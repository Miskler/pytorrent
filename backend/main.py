import os
import threading
import sqlite3
import shutil
from tools import steam_tools as stt
from tools import tools
from datetime import datetime
from fastapi import FastAPI, Request
from fastapi.responses import FileResponse
from pysteamcmdwrapper import SteamCMD, SteamCMDException


WORKSHOP_DIR = os.path.join(os.getcwd())

# Создание подключения к базе данных
conn = sqlite3.connect('database.db')
steam = SteamCMD("steam_client")
app = FastAPI()
threads: dict = {}

@app.middleware("http")
async def modify_header(request: Request, call_next):
    response = await call_next(request)
    response.headers["Access-Control-Allow-Origin"] = "*"
    response.headers["Access-Control-Expose-Headers"] = "Content-Type,Content-Disposition"
    return response

@app.get("/download/steam/{mod_id}")
async def mod_dowloader_request(mod_id: int):
    global threads

    cursor = conn.cursor()
    cursor.execute(f'''
        SELECT * FROM downloaded_mods
        WHERE mod_id = {int(mod_id)} AND source = "steam"
    ''')
    rows = cursor.fetchall()
    path = 'steamapps/workshop/content/'

    mod = stt.get_mod(str(mod_id))

    if mod == None: # Проверяем, существует ли запрашиваемый мод на серверах Steam
        output = stt.checker(rows=rows, path=path, mod_id=mod_id, conn=conn)
        if output is not None:
            return FileResponse(path=output[0], filename=output[1])

        return {"message": "this mod was not found", "error_id": 2}
    elif threads.get(f"{str(mod['consumer_app_id'])}/{str(mod_id)}", None) != None and threads[f"{str(mod['consumer_app_id'])}/{str(mod_id)}"]: # Проверяем, загружаем ли этот ресурс прямо сейчас
        output = stt.checker(rows=rows, path=path, mod_id=mod_id, conn=conn)
        if output is not None:
            del threads[f"{str(mod['consumer_app_id'])}/{str(mod_id)}"]
            cursor.execute(f'''
                DELETE FROM requested_mods WHERE mod_id = {int(mod_id)} AND source = "steam"
            ''')
            conn.commit()
            return FileResponse(path=output[0], filename=output[1])
        else:
            return {"message": "your request is already being processed", "error_id": 3}

    real_path = path + f'{str(mod["consumer_app_id"])}/{str(mod_id)}'

    updating = False
    if (rows != None and len(rows) > 0) or os.path.isfile(real_path+'.zip') or os.path.isdir(real_path): # Проверяем есть ли запись на сервере в каком-либо виде
        if (rows != None and len(rows) > 0) and os.path.isfile(real_path+'.zip'):  # Если это ZIP архив - отправляем
            mod_update = datetime.fromtimestamp(mod["time_updated"])
            db_datetime = datetime.strptime(rows[0][4], '%Y-%m-%d %H:%M:%S')

            # Проверка, нужно ли обновить мод
            if db_datetime > mod_update: # дата добавления на сервер позже чем последнее обновление (не надо обновлять)
                return FileResponse(real_path+'.zip', filename=f"{mod_id}.zip")
            else:
                updating = True
        elif (rows != None and len(rows) > 0) and os.path.isdir(real_path):  # Если это по какой-то причине - папка
            mod_update = datetime.fromtimestamp(mod["time_updated"])
            db_datetime = datetime.strptime(rows[0][4], '%Y-%m-%d %H:%M:%S')

            # Проверка, нужно ли обновить мод
            if db_datetime > mod_update: # дата добавления на сервер позже чем последнее обновление (не надо обновлять)
                # Пытаемся фиксануть проблему
                tools.zipping(game_id=rows[0][0], mod_id=mod_id)
                # Шлем пользователю
                return FileResponse(real_path+'.zip', filename=f"{rows[0][2]}.zip")
            else:
                updating = True

        # Чистим сервер
        if os.path.isdir(real_path):
            shutil.rmtree(real_path)
        elif os.path.isfile(real_path+'.zip'):
            os.remove(real_path+'.zip')

        cursor = conn.cursor()
        cursor.execute(f'''
                    DELETE FROM downloaded_mods WHERE mod_id = {str(mod_id)} AND source = "steam"
                    ''')
        conn.commit()

    if threads["start"].is_alive(): #Проверяем, готов ли сервер обрабатывать запросы
        return {"message": "the server is not ready to process requests", "error_id": 1}

    #Ставим задачу загрузить мод
    threads[f"{mod['consumer_app_id']}/{str(mod_id)}"] = True

    #Делаем запрос с целью выйснить были ли неудачные попытки
    cursor.execute(f'''
            SELECT * FROM not_loaded_mods
            WHERE mod_id = {str(mod_id)} AND source = "steam"
        ''')
    rows = cursor.fetchall()
    cursor.close()

    threading.Thread(target=mod_dowload, args=(mod,), name=f"{str(mod['consumer_app_id'])}/{str(mod_id)}").start()
    #Оповещаем пользователя, что его запрос принят в обработку
    return {"message": "request added to queue", "error_id": 0, "unsuccessful_attempts": rows != None and len(rows) > 0, "updating": updating}
def mod_dowload(mod_data:dict):
    conn_sql = sqlite3.connect('database.db')
    cursor = conn_sql.cursor()

    #Заносим в БД
    cursor.execute(f'''
        INSERT INTO requested_mods (game_id, mod_id, mod_name, mod_size, data_event, source)
        VALUES ({mod_data['consumer_app_id']}, {mod_data['publishedfileid']}, "{mod_data['title']}", {mod_data["file_size"]}, datetime('now'), "steam");
    ''')

    print(f"Поставлена задача на загрузку: {mod_data['consumer_app_id']}/{mod_data['publishedfileid']}")
    steam.workshop_update(app_id=mod_data['consumer_app_id'], workshop_id=mod_data['publishedfileid'], install_dir=WORKSHOP_DIR)

    ok = tools.zipping(game_id=mod_data['consumer_app_id'], mod_id=mod_data['publishedfileid'])

    print(f"Загрузка завершена: {mod_data['consumer_app_id']}/{mod_data['publishedfileid']}")

    if ok: #Если загрузка прошла успешно
        cursor.execute(f'''
                INSERT INTO downloaded_mods
                SELECT 
                  game_id
                  , mod_id
                  , mod_name
                  , mod_size
                  , data_event
                  , source
                FROM requested_mods
                WHERE game_id = {int(mod_data['consumer_app_id'])} AND mod_id = {int(mod_data['publishedfileid'])} AND source = "steam"
            ''')

        #Если мод ранее не могли загрузить, но сейчас загрузили - удаляем из списка не загруженных
        cursor.execute(f'''
                DELETE FROM not_loaded_mods WHERE game_id = {int(mod_data['consumer_app_id'])} AND mod_id = {int(int(mod_data['publishedfileid']))}
                ''')
        conn_sql.commit()

        cursor.execute(f'''
            SELECT * FROM games
            WHERE game_id = {int(mod_data['consumer_app_id'])} AND source = "steam"
        ''')
        conn_sql.commit()
        rows = cursor.fetchall()
        if rows == None or len(rows) <= 0:
            # Отправка запроса на сервер
            dat = stt.get_app(mod_data["consumer_app_id"])
            if dat != None:
                conn_sql.commit()
                cursor.execute(f'''
                    INSERT INTO games (game_id, game_name, data_event, source)
                    VALUES ({mod_data["consumer_app_id"]}, "{dat['name']}", datetime('now'), "steam");
                ''')
    else: #Если загрузка окончена ошибкой
        cursor.execute(f'''
                INSERT INTO not_loaded_mods
                SELECT 
                  game_id
                  , mod_id
                  , mod_name
                  , mod_size
                  , data_event
                  , source
                FROM requested_mods
                WHERE game_id = {int(mod_data["consumer_app_id"])} AND mod_id = {int(mod_data['publishedfileid'])} AND source = "steam"
            ''')
    cursor.close()
    conn_sql.commit()

    cursor = conn_sql.cursor()
    cursor.execute(f'''
            DELETE FROM requested_mods WHERE game_id = {int(mod_data["consumer_app_id"])} AND mod_id = {int(mod_data['publishedfileid'])} AND source = "steam"
            ''')
    cursor.close()
    conn_sql.commit()

    conn_sql.close()

    global threads
    del threads[f"{mod_data['consumer_app_id']}/{mod_data['publishedfileid']}"]

@app.get("/download/{mod_id}")
async def download(mod_id: int):
    global threads

    cursor = conn.cursor()
    cursor.execute(f'''
            SELECT * FROM downloaded_mods
            WHERE mod_id = {int(mod_id)}
        ''')
    rows = cursor.fetchall()

    if rows is not None and len(rows) > 0:
        path = 'steamapps/workshop/content/'
        output = stt.checker(rows=rows, path=path, mod_id=mod_id, conn=conn)
        if output is not None:
            del threads[f"{str(rows[0])}/{str(mod_id)}"]
            cursor.execute(f'''
                DELETE FROM requested_mods WHERE mod_id = {int(mod_id)}
            ''')
            cursor.close()
            conn.commit()
            return FileResponse(path=output[0], filename=output[1])
        else:
            return {"message": "the mod is damaged", "error_id": 2, "test": rows}

    cursor.close()
    return {"message": "the mod is not on the server", "error_id": 1}

@app.get("/list/mods/{page_size}/{page_number}/{game_id}/{source}")
async def mod_list(page_size: int, page_number: int, game_id: int, source: str):
    cursor = conn.cursor()

    #Составление запроса
    req = f'FROM downloaded_mods WHERE game_id = {game_id} '
    if source != "ALL":
        req += f'AND source = "{source}"'

    # Выполнение запроса
    cursor.execute('SELECT * '+req+f' LIMIT {page_size} OFFSET {page_size*page_number}')
    # Получение результатов запроса
    results = cursor.fetchall()

    #Получаем размер базы данных
    cursor.execute('SELECT COUNT(*) '+req)
    database_size = cursor.fetchall()
    
    cursor.close()
    # Вывод результатов
    return {"database_size": database_size[0][0], "offeset": page_size*page_number, "results": results}

@app.get("/list/games/{page_size}/{page_number}/{source}")
async def games_list(page_size: int, page_number: int, source: str):
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
        steam.install(force=True)
        print("Установка клиента Steam завершена")
    except SteamCMDException:
        print("Steam клиент уже установлен, попробуйте использовать параметр --force для принудительной установки")

if threads.get("start", None) == None:
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
