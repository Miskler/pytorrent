import requests
import json
import os
import tools
from fastapi.responses import FileResponse

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


def checker(rows, path, mod_id, conn):
    if rows is not None and len(rows) > 0:  # Если в БД уже есть запись об этом моде
        path_real = path + f'{rows[0][0]}/{rows[0][1]}'  # Получаем реальный путь до файла
        if os.path.isfile(path_real + '.zip'):  # Если это ZIP архив - отправляем
            return [path_real + '.zip', f"{rows[0][2]}.zip"]
        elif os.path.isdir(path):  # Если это по какой-то причине - папка
            # Пытаемся фиксануть проблему
            tools.zipping(game_id=rows[0][0], mod_id=mod_id)

            # Шлем пользователю
            return [path_real + '.zip', f"{rows[0][2]}.zip"]
        else:  # Удаляем запись в БД как не действительную
            cursor = conn.cursor()
            cursor.execute(f'''
                DELETE FROM downloaded_mods WHERE mod_id = {int(mod_id)} AND source = "steam"
            ''')
            cursor.close()
            conn.commit()
    return None
