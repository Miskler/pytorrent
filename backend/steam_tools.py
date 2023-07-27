import json
import os
import tool
from fastapi.responses import FileResponse
import requests
from bs4 import BeautifulSoup
from sqlalchemy import delete
import sql_data_client as sdc

headers = {
    "Content-type": "application/x-www-form-urlencoded",
    "Accept": "text/plain"
}

def get_mod(id:str):
    JSON = None
    try:
        response = requests.post(
            "https://api.steampowered.com/ISteamRemoteStorage/GetPublishedFileDetails/v0001/",
            "itemcount=1&publishedfileids[0]="+str(id),
            headers=headers, timeout=5)
        JSON = json.loads(response.text)["response"]["publishedfiledetails"][0]
        if JSON.get("result", None) != 1:
            JSON = None
    except:
        print("Ошибка! Не удалось получить информацию о моде с серверов Valve :(")

    return JSON

def get_dependencies(id):
    d = 'https://steamcommunity.com/sharedfiles/filedetails/?id='
    response = requests.get(d+id)

    soup = BeautifulSoup(response.content, "html.parser")

    # Используйте метод `find_all` для поиска всех элементов с классом "requiredItemsContainer" и id "RequiredItems"
    containers = soup.find_all("div", class_="requiredItemsContainer", id="RequiredItems")

    # Для каждого контейнера найдите все ссылки внутри него
    f = []
    for container in containers:
        links = container.find_all("a")
        for link in links:
            f.append(link.get("href"))

    return f


def get_app(id:str):
    JSON = None
    try:
        response = requests.get(f"https://store.steampowered.com/api/appdetails?appids={str(id)}&cc=tw",
            headers=headers, timeout=5)
        JSON = json.loads(response.text)[str(id)]
        if not JSON["success"]:
            JSON = None
        else:
            JSON = JSON["data"]
    except:
        print("Ошибка! Не удалось получить информацию о приложении с серверов Valve :(")

    return JSON


def checker(rows, path, mod_id, conn, session):
    if rows is not None and len(rows) > 0:  # Если в БД уже есть запись об этом моде
        bind = session.query(sdc.games_mods).filter(sdc.games_mods.id == int(mod_id)).all()
        if bind != None and len(bind) > 0:
            bind = bind[0].game_id
        else:
            bind = "null"

        path_real = path + f'{bind}/{mod_id}'  # Получаем реальный путь до файла
        if os.path.isfile(path_real + '.zip'):  # Если это ZIP архив - отправляем
            return FileResponse(path=path_real+'.zip', filename=f"{rows[0].name}.zip")
        elif os.path.isdir(path):  # Если это по какой-то причине - папка
            # Пытаемся фиксануть проблему
            tool.zipping(game_id=bind, mod_id=mod_id)

            # Шлем пользователю
            return FileResponse(path=path_real+'.zip', filename=f"{rows[0].name}.zip")
        else:  # Удаляем запись в БД как не действительную
            delete_bind = delete(sdc.games_mods).where(sdc.games_mods.mod_id == int(mod_id))
            delete_statement = delete(sdc.Mod).where(sdc.Mod.id == int(mod_id))
            # Выполнение операции DELETE
            session.execute(delete_statement)
            session.execute(delete_bind)
            session.commit()
    return None

#print(get_mod(3007127191))
