from pathlib import Path
import zipfile
import os
import shutil
import sql_data_client as sdc
from sqlalchemy.sql.expression import desc

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

def sort_mods(sort_by: str):
    match sort_by:
        case 'NAME':
            return sdc.Mod.name
        case 'iNAME':
            return desc(sdc.Mod.name)
        case 'SIZE':
            return sdc.Mod.size
        case 'iSIZE':
            return desc(sdc.Mod.size)
        case 'DATE_CREATION':
            return sdc.Mod.date_creation
        case 'iDATE_CREATION':
            return desc(sdc.Mod.date_creation)
        case 'DATE_UPDATE':
            return sdc.Mod.date_update
        case 'iDATE_UPDATE':
            return desc(sdc.Mod.date_update)
        case 'DATE_REQUEST':
            return sdc.Mod.date_request
        case 'iDATE_REQUEST':
            return desc(sdc.Mod.date_request)
        case 'SOURCE':
            return sdc.Mod.source
        case 'iSOURCE':
            return desc(sdc.Mod.source)
        case 'iDOWNLOADS':
            return desc(sdc.Mod.downloads)
        case _:
            return sdc.Mod.downloads  # По умолчанию сортируем по загрузкам
