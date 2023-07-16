import os
import threading
import sqlite3
import zipfile
import shutil
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
    item = SteamWorkshopItem(f'https://steamcommunity.com/sharedfiles/filedetails/?id={mod_id}')
    if item.game == None:
        file_path = "steamapps/workshop/content/1118200/2981286071.zip"  # Укажите путь к вашему файлу
        return FileResponse(file_path, filename="2981286071.zip")
    return {"message": item}

@app.get("/download/{mod_id}")
async def mod_dowloader_request(mod_id: int):
    if threads["start"].is_alive(): #Проверяем, готов ли сервер обрабатывать запросы
        return {"message": "the server is not ready to process requests", "error_id": 1}

    item = SteamWorkshopItem(f'https://steamcommunity.com/sharedfiles/filedetails/?id={mod_id}')
    if item.status != 1: # Проверяем, существует ли запрашиваемый мод вообще
        #ПРОВЕРЯЕМ, СУЩЕСТВУЕТ ЛИ МОД В СИСТЕМЕ (файлом ИЛИ zip ИЛИ записью в бд)
            #ПРОВЕРЯЕМ ПРОВАЛИДИРОВАН ЛИ ((файлом ИЛИ zip) И записью в бд)
                #ШЛЕМ ПОЛЬЗОВАТЕЛЮ
            #иначе
                #УДАЛЯЕМ

        return {"message": "this mod was not found", "error_id": 2}
    elif threads.get(f"{item.game}/{mod_id}", None) != None and threads[f"{item.game}/{mod_id}"]: #Проверяем, загружаем ли этот ресурс прямо сейчас
        return {"message": "your request is already being processed", "error_id": 3}

    #TODO: Сделать обработку запросов с случаями когда мод уже загружен на сервер
    #TODO: Сделать проверку доступно ли обновление для мода

    #Примерная логика:

    #ПРОВЕРЯЕМ СУЩЕСТВУЕТ ЛИ МОД НА СЕРВЕРЕ (как папка ИЛИ zip ИЛИ запись в бд)
        #ПРОВЕРЯЕМ СУЩЕСТВУТ ЛИ ФАЙЛ и ПРОВЕРЯЕМ ПРОВАЛИДИРОВАН ЛИ ОН(запись в бд) и не ДОСТУПНО ЛИ ЕГО ОБНОВЛЕНИЕ
            #ШЛЕМ ПОЛЬЗОВАТЕЛЮ ZIP АРХИВ
        #иначе
            #ПАПКУ УДАЛЯЕМ
            #УДАЛЯЕМ УПОМИНАНИЕ О НЕМ В ТАБЛИЦЕ downloaded_mods


    #Загружаем мод на сервер
    cursor = conn.cursor()
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


def mod_dowload(game_id: int, mod_id: int, mod_name: str = "mod"):
    global threads
    #Ставим задачу загрузить мод
    print(f"Поставлена задача на загрузку: {game_id}/{mod_id}")
    threads[f"{game_id}/{mod_id}"] = True
    steam.workshop_update(app_id=game_id, workshop_id=mod_id, install_dir=WORKSHOP_DIR)
    del threads[f"{game_id}/{mod_id}"]

    #Запаковываем сохраненный мод в архив (для экономии места и трафика)
    directory_path = f"steamapps/workshop/content/{game_id}/{mod_id}"  # Укажите путь к вашей папке
    zip_path = f"steamapps/workshop/content/{game_id}/{mod_id}.zip"  # Укажите путь к ZIP-архиву, который вы хотите создать
    with zipfile.ZipFile(zip_path, 'w', zipfile.ZIP_BZIP2) as zipf:
        for root, _, files in os.walk(directory_path):
            for file in files:
                file_path = os.path.join(root, file)
                relative_path = os.path.relpath(file_path, directory_path)
                zipf.write(file_path, os.path.join(mod_name, relative_path))
                #zipf.write(file_path, os.path.relpath(file_path, directory_path))
    #Удаление исходной папки и её содержимого
    shutil.rmtree(directory_path)

    conn_sql = sqlite3.connect('database.db')

    cursor = conn_sql.cursor()
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
    cursor.close()
    conn_sql.commit()

    cursor = conn_sql.cursor()
    cursor.execute(f'''
            DELETE FROM requested_mods WHERE game_id = {int(game_id)} AND mod_id = {int(mod_id)}
            ''')
    cursor.close()
    conn_sql.commit()

    conn_sql.close()

    print(f"Загрузка завершена: {game_id}/{mod_id}")


def init():
    global steam
    try:
        steam.install()
        print("Установка клиента Steam завершена")
    except SteamCMDException:
        print("Steam клиент уже установлен, попробуйте использовать параметр --force для принудительной установки")

    #TODO: При инициализации чистить файловую систему от недозагруженных модов, после отчищать таблицу requested_mods

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
    # Закрытие курсора и сохранение изменений
    cursor.close()
    conn.commit()

    threads["start"] = threading.Thread(target=init, name="start")
    threads["start"].start()

