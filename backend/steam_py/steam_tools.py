import requests
import json

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
