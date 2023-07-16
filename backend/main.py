import os
import threading
import sqlite3
import zipfile
import shutil
from pathlib import Path
from datetime import datetime, timedelta
from fastapi import FastAPI
from fastapi.responses import FileResponse
from pysteamcmdwrapper import SteamCMD, SteamCMDException
from swd import SteamWorkshopItem


WORKSHOP_DIR = os.path.join(os.getcwd())

# Создание подключения к базе данных
conn = sqlite3.connect('database.db')
steam = SteamCMD("steam_client")
app = FastAPI()
threads:dict = {}

#БАЗА ДАННЫХ: id мода, id игры, дата обновления

##СДЕЛАТЬ СИСТЕМУ ЗАЩИТЫ, ЕСЛИ ПАПКА ЕСТЬ, НО ОНА НЕ ВНЕСЕНА В БАЗУ ДАННЫХ - СЧИТАЕМ БИТОЙ(Т.Е. СКАЧИВАТЬ НАЧАЛИ, НО НА КАКОМ-ТО ЭТАПЕ ПРЕРВАЛИ) И СКАЧИВАЕМ ЗАНОГО

@app.get("/")
async def root():
    return {"message": WORKSHOP_DIR}

@app.get("/t/{mod_id}")
async def t(mod_id:int):
    cursor = conn.cursor()

    # Получение значения времени из базы данных
    cursor.execute(f"SELECT data_event FROM downloaded_mods WHERE mod_id = {mod_id}")
    result = cursor.fetchone()
    if result != None:
        db_datetime = datetime.strptime(result[0], '%Y-%m-%d %H:%M:%S')

        # Получение текущего времени
        current_datetime = datetime.now()

        # Вычисление разницы во времени
        time_difference = current_datetime - db_datetime

        # Проверка, прошло ли 10 дней
        if time_difference >= timedelta(days=10):
            # Выполнение вашего кода
            print("Прошло 10 дней!")

        return {"время с последнего обновления": time_difference, "прошло 10 минут": time_difference >= timedelta(minutes=10), "прошло 10 часов": time_difference >= timedelta(hours=10), "прошло 10 дней": time_difference >= timedelta(days=10)}
    else: return {"message": "Такого мода нету на сервере!!"}

@app.get("/api/download/steam/{mod_id}")
async def mod_dowloader_request(mod_id: int):
    if threads["start"].is_alive(): #Проверяем, готов ли сервер обрабатывать запросы
        return {"message": "the server is not ready to process requests", "error_id": 1}

    cursor = conn.cursor()
    cursor.execute(f'''
        SELECT * FROM downloaded_mods
        WHERE mod_id = {int(mod_id)}
    ''')
    rows = cursor.fetchall()
    path = 'steamapps/workshop/content/'

    check_error = False
    try:
        item = SteamWorkshopItem(f'https://steamcommunity.com/sharedfiles/filedetails/?id={mod_id}')
    except:
        check_error = True

    if check_error or item.status != 1: #Проверяем, существует ли запрашиваемый мод на серверах Steam
        if len(rows) > 0: #Если в БД уже есть запись об этом моде
            path_real = path+f'{rows[0][0]}/{rows[0][1]}' # Получаем реальный путь до файла
            if os.path.isfile(path_real+'.zip'): #Если это ZIP архив - отправляем
                return FileResponse(path_real+'.zip', filename=f"{rows[0][2]}.zip")
            elif os.path.isdir(path): #Если это по какой-то причине - папка
                #Пытаемся фиксануть проблему
                zipping(game_id=rows[0][0], mod_id=mod_id)

                #Шлем пользователю
                return FileResponse(path_real+'.zip', filename=f"{rows[0][2]}.zip")
            else: #Удаляем запись в БД как не действительную
                cursor = conn.cursor()
                cursor.execute(f'''
                            DELETE FROM downloaded_mods WHERE mod_id = {int(mod_id)}
                            ''')
                cursor.close()
                conn.commit()

        return {"message": "this mod was not found", "error_id": 2, "info": {"check_error": check_error, "search_error": item.status != 1}}
    elif threads.get(f"{item.game}/{mod_id}", None) != None and threads[f"{item.game}/{mod_id}"]: #Проверяем, загружаем ли этот ресурс прямо сейчас
        return {"message": "your request is already being processed", "error_id": 3}


    real_path = path+f'{item.game}/{mod_id}'
    if (rows != None and len(rows) > 0) or os.path.isfile(real_path+'.zip') or os.path.isdir(real_path):  # Проверяем есть ли запись на сервере в каком-либо виде
        if (rows != None and len(rows) > 0) and os.path.isfile(real_path+'.zip'):  # Если это ZIP архив - отправляем
            db_datetime = datetime.strptime(rows[0][4], '%Y-%m-%d %H:%M:%S')
            # Вычисление разницы во времени
            time_difference = datetime.now() - db_datetime

            # Проверка, нужно ли обновить мод
            if time_difference <= timedelta(days=7):
                return FileResponse(real_path+'.zip', filename=f"{mod_id}.zip")
        elif (rows != None and len(rows) > 0) and os.path.isdir(real_path):  # Если это по какой-то причине - папка
            db_datetime = datetime.strptime(rows[0][4], '%Y-%m-%d %H:%M:%S')
            # Вычисление разницы во времени
            time_difference = datetime.now() - db_datetime

            # Проверка, нужно ли обновить мод
            if time_difference <= timedelta(days=7):
                # Пытаемся фиксануть проблему
                zipping(game_id=rows[0][0], mod_id=mod_id)
                # Шлем пользователю
                return FileResponse(real_path+'.zip', filename=f"{rows[0][2]}.zip")

        # Чистим сервер
        if os.path.isdir(real_path):
            shutil.rmtree(real_path)
        elif os.path.isfile(real_path+'.zip'):
            os.remove(real_path+'.zip')

        cursor = conn.cursor()
        cursor.execute(f'''
                    DELETE FROM downloaded_mods WHERE mod_id = {int(mod_id)}
                    ''')
        cursor.close()
        conn.commit()


    #Загружаем мод на сервер
    cursor.execute(f'''
        INSERT INTO requested_mods (game_id, mod_id, mod_name, mod_size, data_event)
        VALUES ({int(item.game)}, {int(mod_id)}, "{str(item.title)}", {int(item.size)}, datetime('now'));
    ''')
    cursor.close()
    conn.commit()
    threading.Thread(target=mod_dowload, args=(item.game, mod_id, ), name=f"{item.game}/{mod_id}").start()
    #Оповещаем пользователя, что его запрос принят в обработку
    return {"message": "request added to queue", "error_id": 0}


#TODO: Cделать API которое на запрос может послать список доступных модов здесь на сервере, входные данные - (id игры, размер страницы, номер страницы)

#TODO: Сделать функцию возвращающую массив всех игр к которым есть хотя бы один мод, входные данные - (размер страницы, номер страницы)

#TODO: Сделать функцию возвращающую столбец по фильтру ID, входные данные - (ID мода)


def mod_dowload(game_id: int, mod_id: int, mod_name: str = "mod"):
    global threads
    #Ставим задачу загрузить мод
    print(f"Поставлена задача на загрузку: {game_id}/{mod_id}")
    threads[f"{game_id}/{mod_id}"] = True
    steam.workshop_update(app_id=game_id, workshop_id=mod_id, install_dir=WORKSHOP_DIR)
    del threads[f"{game_id}/{mod_id}"]

    ok = zipping(game_id=game_id, mod_id=mod_id)

    conn_sql = sqlite3.connect('database.db')

    cursor = conn_sql.cursor()

    print(f"Загрузка завершена: {game_id}/{mod_id}")

    if ok: #Если загрузка прошла успешно
        cursor.execute(f'''
                INSERT INTO downloaded_mods
                SELECT 
                  game_id
                  , mod_id
                  , mod_name
                  , mod_size
                  , data_event
                FROM requested_mods
                WHERE game_id = {int(game_id)} AND mod_id = {int(mod_id)}
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
                FROM requested_mods
                WHERE game_id = {int(game_id)} AND mod_id = {int(mod_id)}
            ''')
    cursor.close()
    conn_sql.commit()

    cursor = conn_sql.cursor()
    cursor.execute(f'''
            DELETE FROM requested_mods WHERE game_id = {int(game_id)} AND mod_id = {int(mod_id)}
            ''')
    cursor.close()
    conn_sql.commit()

    conn_sql.close()

def zipping(game_id: int, mod_id: int) -> bool:
    # Запаковываем сохраненный мод в архив (для экономии места и трафика)
    directory_path = f"steamapps/workshop/content/{game_id}/{mod_id}"  # Укажите путь к вашей папке
    zip_path = f"steamapps/workshop/content/{game_id}/{mod_id}.zip"  # Укажите путь к ZIP-архиву, который вы хотите создать

    if not os.path.isdir(directory_path) or not any(Path(directory_path).iterdir()):
        if os.path.isdir(directory_path):
            shutil.rmtree(directory_path)
        return False

    with zipfile.ZipFile(zip_path, 'w', zipfile.ZIP_BZIP2) as zipf:
        for root, _, files in os.walk(directory_path):
            for file in files:
                file_path = os.path.join(root, file)
                zipf.write(file_path, os.path.relpath(file_path, directory_path))
    # Удаление исходной папки и её содержимого
    shutil.rmtree(directory_path)
    return True


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
            data_event DATETIME
        )
    ''')
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS requested_mods (
            game_id INTEGER,
            mod_id INTEGER,
            mod_name TEXT,
            mod_size INTEGER,
            data_event DATETIME
        )
    ''')
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS not_loaded_mods (
            game_id INTEGER,
            mod_id INTEGER,
            mod_name TEXT,
            mod_size INTEGER,
            data_event DATETIME
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
