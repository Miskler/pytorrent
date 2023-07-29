import os
import threading
import sqlite3
import shutil
import steam_tools as stt
import sql_data_client as sdc
import tool
import sql_statistics_client as stc
from sqlalchemy import delete, insert
from sqlalchemy.orm import sessionmaker
from datetime import datetime
from fastapi import FastAPI, Request
from pysteamcmdwrapper import SteamCMD, SteamCMDException
from starlette.responses import JSONResponse, FileResponse, RedirectResponse



WORKSHOP_DIR = os.path.join(os.getcwd())
path = 'steamapps/workshop/content/'

# Создание подключения к базе данных
conn = sqlite3.connect('database.db')
steam = SteamCMD("steam_client")
app = FastAPI(
    title="PyTorrent API",
    contact={
        "name": "GitHub",
        "url": "https://github.com/Miskler/pytorrent"
    },
    license_info={
        "name": "MPL-2.0 license",
        "identifier": "MPL-2.0",
    },
)
threads: dict = {}

@app.middleware("http")
async def modify_header(request: Request, call_next):
    response = await call_next(request)
    response.headers["Access-Control-Allow-Origin"] = "*"
    response.headers["Access-Control-Expose-Headers"] = "Content-Type,Content-Disposition"
    return response

@app.get("/")
async def main():
    """
    Переадресация на `/docs`
    """
    return RedirectResponse(url="/docs")

@app.get("/t/{g}")
async def t(g):
    Session = sessionmaker(bind=sdc.engine)

    # Создание сеанса с помощью контекстного менеджера
    with Session() as session:
        rows = session.query(sdc.Mod).filter(sdc.Mod.id == g).all()
        return rows[0].tags

@app.get("/download/steam/{mod_id}")
async def mod_dowloader_request(mod_id: int):
    """
    Нужно передать `ID` мода **Steam**.
    Если у сервера уже есть этот мод - он его отправит как `ZIP` архив со сжатием `ZIP_BZIP2`.
    Если у сервера нет этого мода он отправит `JSON` с информацией о постановке мода на скачивание.
    """

    global threads
    global path

    # Создание сессии
    Session = sessionmaker(bind=sdc.engine)

    # Выполнение запроса
    session = Session()
    rows = session.query(sdc.Mod).filter(sdc.Mod.id == mod_id).all()
    session.close()

    mod = stt.get_mod(str(mod_id))

    if mod == None: # Проверяем, существует ли запрашиваемый мод на серверах Steam
        output = stt.checker(rows=rows, path=path, mod_id=mod_id, session=session)
        if output is not None:
            return output

        return JSONResponse(status_code=404, content={"message": "this mod was not found", "error_id": 2})
    elif threads.get(f"{str(mod['consumer_app_id'])}/{str(mod_id)}", None) != None and threads[f"{str(mod['consumer_app_id'])}/{str(mod_id)}"]: # Проверяем, загружаем ли этот ресурс прямо сейчас
        output = stt.checker(rows=rows, path=path, mod_id=mod_id, session=session)
        if output is not None:
            del threads[f"{str(mod['consumer_app_id'])}/{str(mod_id)}"]

            session = Session()
            # Создание выражения DELETE
            delete_statement = delete(sdc.Mod).where(sdc.Mod.id == mod_id, sdc.Mod.source == "steam")
            # Выполнение операции DELETE
            session.execute(delete_statement)
            session.commit()
            session.close()

            return output
        else:
            return JSONResponse(status_code=102, content={"message": "your request is already being processed", "error_id": 3})

    real_path = path + f'{str(mod["consumer_app_id"])}/{str(mod_id)}'

    updating = False
    if (rows != None and len(rows) > 0) or os.path.isfile(real_path+'.zip') or os.path.isdir(real_path): # Проверяем есть ли запись на сервере в каком-либо виде
        if (rows != None and len(rows) > 0) and os.path.isfile(real_path+'.zip'):  # Если это ZIP архив - отправляем
            mod_update = datetime.fromtimestamp(mod["time_updated"])
            db_datetime = rows[0].date_update

            # Проверка, нужно ли обновить мод
            print(db_datetime, mod_update)
            if db_datetime >= mod_update: # дата добавления на сервер позже чем последнее обновление (не надо обновлять)
                return FileResponse(real_path+'.zip', filename=f"{rows[0].name}.zip")
            else:
                updating = True
        elif (rows != None and len(rows) > 0) and os.path.isdir(real_path):  # Если это по какой-то причине - папка
            mod_update = datetime.fromtimestamp(mod["time_updated"])
            db_datetime = rows[0].date_update

            # Проверка, нужно ли обновить мод
            print(db_datetime, mod_update)
            if db_datetime >= mod_update: # дата добавления на сервер позже чем последнее обновление (не надо обновлять)
                # Пытаемся фиксануть проблему
                tool.zipping(game_id=rows[0].id, mod_id=mod_id)
                # Шлем пользователю
                return FileResponse(real_path+'.zip', filename=f"{rows[0].name}.zip")
            else:
                updating = True

        # Чистим сервер
        if os.path.isdir(real_path):
            shutil.rmtree(real_path)
        elif os.path.isfile(real_path+'.zip'):
            os.remove(real_path+'.zip')

        if not updating:
            session = Session()
            # Если загрузка окончена ошибкой
            delete_binding = sdc.games_mods.delete().where(sdc.games_mods.c.mod_id == int(mod_id))
            delete_statement = delete(sdc.Mod).where(sdc.Mod.id == int(mod_id))
            delete_tags = sdc.mods_tags.delete().where(sdc.mods_tags.c.mod_id == int(mod_id))
            delete_dep = sdc.mods_dependencies.delete().where(
                sdc.mods_dependencies.c.mod_id == int(mod_id))
            delete_resources = delete(sdc.ResourceMod).where(sdc.ResourceMod.owner_id == int(mod_id))
            # Выполнение операции DELETE
            session.execute(delete_statement)
            session.execute(delete_binding)
            session.execute(delete_tags)
            session.execute(delete_dep)
            session.execute(delete_resources)
            session.commit()
            session.close()

    if threads["start"].is_alive(): #Проверяем, готов ли сервер обрабатывать запросы
        return JSONResponse(status_code=103, content={"message": "the server is not ready to process requests", "error_id": 1})

    #Ставим задачу загрузить мод
    threads[f"{mod['consumer_app_id']}/{str(mod_id)}"] = True

    threading.Thread(target=mod_dowload, args=(mod, updating), name=f"{str(mod['consumer_app_id'])}/{str(mod_id)}").start()
    #Оповещаем пользователя, что его запрос принят в обработку
    return JSONResponse(status_code=202, content={"message": "request added to queue", "error_id": 0, "updating": updating})
def mod_dowload(mod_data:dict, update: bool = False):
    # Создание сессии
    Session = sessionmaker(bind=sdc.engine)
    # Выполнение запроса
    session = Session()
    if not update:
        insert_statement = insert(sdc.Mod).values(
            id=mod_data['publishedfileid'],
            name=mod_data['title'],
            description=mod_data['description'],
            size=mod_data['file_size'],
            condition=2,
            date_creation=datetime.fromtimestamp(mod_data['time_created']),
            date_update=datetime.fromtimestamp(mod_data['time_updated']),
            date_request=datetime.now(),
            source="steam",
            downloads=0
        )
        # Выполнение операции INSERT
        session.execute(insert_statement)
    else:
        session.query(sdc.Mod).filter_by(id=int(mod_data['publishedfileid'])).update({'condition': 2})
    session.commit()


    print(f"Поставлена задача на загрузку: {mod_data['consumer_app_id']}/{mod_data['publishedfileid']}")
    steam.workshop_update(app_id=mod_data['consumer_app_id'], workshop_id=mod_data['publishedfileid'], install_dir=WORKSHOP_DIR)

    ok = tool.zipping(game_id=mod_data['consumer_app_id'], mod_id=mod_data['publishedfileid'])

    print(f"Загрузка завершена: {mod_data['consumer_app_id']}/{mod_data['publishedfileid']}")

    if ok: #Если загрузка прошла успешно
        insert_statement = insert(sdc.games_mods).values(
            mod_id=mod_data['publishedfileid'],
            game_id=mod_data['consumer_app_id']
        )

        session.execute(insert_statement)
        session.query(sdc.Mod).filter_by(id=int(mod_data['publishedfileid'])).update({'condition': 1})
        session.commit()

        threading.Thread(target=stt.setters, args=(session, mod_data,),
                         name=f"{mod_data['consumer_app_id']}/{mod_data['publishedfileid']}/get_info").start()

        print(f"Процесс загрузки ({mod_data['consumer_app_id']}/{mod_data['publishedfileid']}) завершен! (успешно)")
    else:
        # Если загрузка окончена ошибкой
        delete_binding = sdc.games_mods.delete().where(sdc.games_mods.c.mod_id == int(mod_data['publishedfileid']))
        delete_statement = delete(sdc.Mod).where(sdc.Mod.id == int(mod_data['publishedfileid']))
        delete_tags = sdc.mods_tags.delete().where(sdc.mods_tags.c.mod_id == int(mod_data['publishedfileid']))
        delete_dep = sdc.mods_dependencies.delete().where(sdc.mods_dependencies.c.mod_id == int(mod_data['publishedfileid']))
        # Выполнение операции DELETE
        session.execute(delete_statement)
        session.execute(delete_binding)
        session.execute(delete_tags)
        session.execute(delete_dep)
        session.commit()
        session.close()
        print(f"Процесс загрузки ({mod_data['consumer_app_id']}/{mod_data['publishedfileid']}) завершен! (неудачно)")

    global threads
    del threads[f"{mod_data['consumer_app_id']}/{mod_data['publishedfileid']}"]

@app.get("/download/{mod_id}")
async def download(mod_id: int):
    """
    Нужно передать `ID` мода.
    Если у сервера уже есть этот мод - он его отправит как `ZIP` архив со сжатием `ZIP_BZIP2`.
    Эта самая быстрая команда загрузки, но если на сервере не будет запрашиваемого мода никаких действий по его загрузке предпринято не будет.
    """

    global path
    global threads

    # Создание сессии
    Session = sessionmaker(bind=sdc.engine)
    session = Session()
    # Выполнение запроса
    rows = session.query(sdc.Mod).filter(sdc.Mod.id == mod_id).all()
    session.close()

    if rows is not None and len(rows) > 0:
        if rows[0].condition >= 2:
            return JSONResponse(status_code=102, content={"message": "this mod is still loading", "error_id": 3})

        output = stt.checker(rows=rows, path=path, mod_id=mod_id, session=session)
        if output is not None:
            if threads.get(f"{str(rows[0])}/{str(mod_id)}", None) != None:
                del threads[f"{str(rows[0])}/{str(mod_id)}"]

            return output
        else:
            return JSONResponse(status_code=404, content={"message": "the mod is damaged", "error_id": 2, "test": rows})

    return JSONResponse(status_code=404, content={"message": "the mod is not on the server", "error_id": 1})

@app.post("/list/mods/")
async def mod_list(data: dict = {"page_size": 10, "page": 0, "sort": "NO", "tags": [], "games": [], "name": "", "dependencies": []}):
    """
    Возвращает список модов к конкретной игре, которые есть на сервере.

    О сортировке:
    Префикс `i` указывает что сортировка должна быть инвертированной.
    1. NAME - сортировка по имени.
    2. SIZE - сортировка по размеру.
    3. DATE_CREATION - сортировка по дате создания.
    4. DATE_UPDATE - сортировка по дате обновления.
    5. DATE_REQUEST - сортировка по дате последнего запроса.
    6. SOURCE - сортировка по источнику.
    7. DOWNLOADS (по умолчанию) - сортировка по колическу загрузок.

    О фильтрации:
    1. "tags" - передать список тегов которые должен содержать мод (по умолчанию пуст) (нужно передать ID тегов).
    2. "games" - список игр к которым подходит мод.
    Сервер учитывает что мод может подходить для нескольких игр, но обычно мод подходит только для одной игры.
    3. "dependencies" - отфильтровывает моды в зависимостях которых не указан список этих модов.
    4. "not_dependencies" - отфильтровывает моды в зависимостях которых указан список этих модов.
    5. "primary_sources" - список допустимых первоисточников.
    6. "name" - поиск по имени. Работает как проверка есть ли у мода в названии определенная последовательности символов.
    """
    # TODO дописать 3, 4, 5 и сделать защиту на не правильный тип данных в запросе.


    if (len(data.get("tags", []))+len(data.get("games", []))+len(data.get("dependencies", []))) >= 30:
        return JSONResponse(status_code=413, content={"message": "the maximum complexity of filters is 30 elements in sum", "error_id": 2})

    # Создание сессии
    Session = sessionmaker(bind=sdc.engine)
    session = Session()
    # Выполнение запроса
    query = session.query(sdc.Mod).order_by(tool.sort_mods(data.get("sort", "NO")))

    # Фильтрация по тегам
    if len(data.get("tags", [])) > 0:
        for tag_id in data["tags"]:
            query = query.filter(sdc.Mod.tags.any(sdc.ModTag.id == tag_id))

    # Фильтрация по играм
    if len(data.get("games", [])) > 0:
        for game_id in data["games"]:
            query = query.filter(sdc.Mod.games.any(sdc.Game.id == game_id))

    # Фильтрация по имени
    if len(data.get("name", "")) > 0:
        query = query.filter(sdc.Mod.name.ilike(f'%{data["name"]}%'))

    mods_count = query.count()

    offset = data.get("page_size", 10)*data.get("page", 0)
    mods = query.offset(offset).limit(data.get("page_size", 10)).all()

    session.close()

    # Вывод результатов
    return {"database_size": mods_count, "offeset": offset, "results": mods}

@app.get("/list/games/{page_size}/{page_number}/{source}")
async def games_list(page_size: int, page_number: int, source: str):
    """
    Возвращает список игр, моды к которым есть на сервере.
    """
    # TODO обновить ветку games_list

    cursor = conn.cursor()

    # Составление запроса
    req = f'FROM games'
    if source != "ALL":
        req += f' WHERE source = "{source}"'

    offeset = page_size * page_number
    # Выполнение запроса
    cursor.execute('SELECT * '+req+f' LIMIT {page_size} OFFSET {offeset}')
    # Получение результатов запроса
    results = cursor.fetchall()

    # Получаем размер базы данных
    cursor.execute('SELECT COUNT(*) '+req)
    database_size = cursor.fetchall()

    cursor.close()
    return {"database_size": database_size[0][0], "offeset": offeset, "results": results}


@app.get("/info/game/{game_id}")
async def game_info(game_id: int):
    """
    Возвращает информацию об конкретном моде, а так же его состояние на сервере.
    """
    # TODO обновить ветку game_info

    cursor = conn.cursor()

    # Выполнение запроса
    cursor.execute(f'SELECT * FROM games WHERE game_id = {game_id}')
    # Получение результатов запроса
    results = cursor.fetchall()
    if results != None and len(results) > 0:
        results = results[0]
    else:
        results = None

    cursor.close()
    return {"results": results}


@app.get("/info/mod/{mod_id}")
async def mod_info(mod_id: int):
    """
    Возвращает информацию о конкретной игре.
    """
    # TODO обновить ветку mod_info

    cursor = conn.cursor()

    # Составление запроса
    req = 'SELECT * FROM '
    est = f' WHERE mod_id = {mod_id}'

    # Выполнение запроса
    cursor.execute(req+'downloaded_mods'+est)
    # Получение результатов запроса
    results_downloaded = cursor.fetchall()
    if results_downloaded != None and len(results_downloaded) > 0:
        results_downloaded = results_downloaded[0]
    else:
        results_downloaded = None

    # Выполнение запроса
    cursor.execute(req+'requested_mods'+est)
    # Получение результатов запроса
    results_requested = cursor.fetchall()
    if results_requested != None and len(results_requested) > 0:
        results_requested = results_requested[0]
    else:
        results_requested = None

    # Выполнение запроса
    cursor.execute(req+'not_loaded_mods'+est)
    # Получение результатов запроса
    results_not_loaded = cursor.fetchall()
    if results_not_loaded == None or len(results_not_loaded) <= 0:
        results_not_loaded = None

    cursor.close()

    condition = -1
    if results_downloaded != None: condition = 0
    elif results_requested != None:
        if results_not_loaded != None: condition = 1
        else: condition = 2
    elif results_not_loaded != None: condition = 3

    return {"condition": condition, "downloaded": results_downloaded, "requested": results_requested, "not_loaded": results_not_loaded}


def init():
    global steam
    try:
        # TODO не забыть вернуть автообновление
        steam.install(force=False)
        print("Установка клиента Steam завершена")
    except SteamCMDException:
        print("Steam клиент уже установлен, попробуйте использовать параметр --force для принудительной установки")

if threads.get("start", None) == None:
    # TODO обновить инициализацию

    # Создание курсора
    cursor = conn.cursor()
    # Создание таблицы, если она не существует
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS downloaded_mods (
            game_id INTEGER,
            mod_id INTEGER,
            mod_name TEXT,
            mod_size INTEGER,
            data_event DATETIME,
            source TEXT
        )
    ''')
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS requested_mods (
            game_id INTEGER,
            mod_id INTEGER,
            mod_name TEXT,
            mod_size INTEGER,
            data_event DATETIME,
            source TEXT
        )
    ''')
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS not_loaded_mods (
            game_id INTEGER,
            mod_id INTEGER,
            mod_name TEXT,
            mod_size INTEGER,
            data_event DATETIME,
            source TEXT
        )
    ''')
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS games (
            game_id INTEGER,
            game_name TEXT,
            data_event DATETIME,
            source TEXT
        )
    ''')

    conn.commit()

    threads["start"] = threading.Thread(target=init, name="start")
    threads["start"].start()

    # Выполнение запроса для выборки всех элементов из таблицы
    cursor.execute('SELECT * FROM requested_mods')
    # Получение всех строк из результата запроса
    rows = cursor.fetchall()

    # Обработка каждой строки в цикле
    for row in rows:
        # Ваш код обработки строки
        # Например, вы можете получить значения столбцов таким образом:
        path = f'steamapps/workshop/content/{row[0]}/{row[1]}'

        if os.path.isfile(path+'.zip'):
            print(f'Обнаружен не провалидированная архив! ({row[0]}/{row[1]})')
            os.remove(path+'.zip')
        if os.path.isdir(path):
            print(f'Обнаружена не провалидированная папка! ({row[0]}/{row[1]})')
            #Удаление исходной папки и её содержимого
            shutil.rmtree(path)

    # Выполнение операции удаления всех строк в таблице
    cursor.execute('DELETE FROM requested_mods')
    cursor.close()
    # Подтверждение изменений
    conn.commit()
