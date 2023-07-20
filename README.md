# PyTorrent

### Цель данного проекта - позволить скачивать моды всем!

### Проект позволяет скачивать моды для игр с серверов **Valve**.

## Структура проекта
1. Backend сервер. Непосредственно общается с Steam, кэширует моды и отсылает пользователям по запросу.
Кэширование нужно для минимизации обращений к серверам Valve.
Так как частые запросы туда могут расцениваться сервером как бот-активность *(и он будет прав)*.
Из про кэшированных модов сервер составляет список который могут использовать сторонние приложения.
Сервер не позволяет скачивать моды со Steam на прямую.
Вместо этого нужно создать запрос на кеширование и после некоторое время опрашивать сервер о состоянии запроса.
После мод будет добавлен в библиотеку сервера от куда его уже можно скачать.

## Документация
### Начало работы
Адрес сервера: https://43093.zetalink.ru:8000/docs

### `/download/steam/{mod_id}`
Нужно передать `ID` мода **Steam**. 
Если у сервера уже есть этот мод - он его отправит как `ZIP` архив со сжатием `ZIP_BZIP2`.
Если у сервера нет этого мода он отправит `JSON` с информацией о постановке мода на скачивание.

**JSON ответы:**

1. **Успешная постановка запроса на скачивание:**
```
{"message": "request added to queue", "error_id": 0, "unsuccessful_attempts": true / false}
```
* `unsuccessful_attempts` - это пометка сообщает о том были ли провальные попытки скачать мод.

2. **Сервер запускается:**
```
{"message": "the server is not ready to process requests", "error_id": 1}
```
* Это ошибка возникает в ситуации когда сервер ещё не успел запустить службу по скачиванию модов,
а на самом сервере этого мода нет.

3. **Мод не найден:**
```
{"message": "this mod was not found", "error_id": 2, "info": {"check_error": true / false, "search_error": true / false}}
```
* Сервер использует **API** [modsdownloader.com](https://modsdownloader.com/) для определения существует ли мод
и получения некоторой дополнительной информации о моде. К сожаления этот сервис иногда может ложно сказать,
что мода не существует. В будущем если я решу развивать этот сервис, 
я начну использовать свой парсер для устранения этой проблемы.
* `check_error` - если `true`, то [modsdownloader.com](https://modsdownloader.com/) не отвечает.
* `search_error` - если `true`, то [modsdownloader.com](https://modsdownloader.com/) утверждает, что мода не существует.

4. **Сервер уже пытается скачать этот мод:**
```
{"message": "your request is already being processed", "error_id": 3}
```
* Постоянно спрашивать состояние мода через эту функцию не рекомендую, так как она достаточно медленная. 
Лучше использовать `/info/mod/{mod_id}`.

### `/list/mods/{page_size}/{page_number}/{game_id}/{source}`
Возвращает список модов к конкретной игре, которые есть на сервере. Нужно передать:

1. `page_size` *(int)* - количество элементов которое будет возвращено.
2. `page_number` *(int)* - "страница" которая будет возвращена. Рассчитывается как `page_size * page_number = offeset`.
3. `game_id` *(int)* - **ID** игры моды к которым нужно вернуть список модов. **ID** такое же, как и **ID** игры в **Steam**.
4. `source` *(str)* *(опционально)* - фильтрация по источнику, например `steam`. **Если источник не важен** передать `ALL`.

**JSON ответ:**
```
{"database_size": int, "request": {"page_size": int, "page_number": int, "offeset": int, "source": str, "game_id": int}, "results": list[list]}
```
* `database_size` - общий размер базы данных с текущими фильтрами *(`game_id` и `source`)*.
* `request` - возвращает словарь с вашим запросом.
* * `offeset` - итоговый рассчитанный сдвиг с `0` элемента в **БД**.
* `results` - возвращает массив массивов в котором содержатся все элементы соответствующие текущему запросу *(пустой список если ничего не найдено)*.
Содержание под массива:
* * 1. `game_id` *(int)*
* * 2. `mod_id` *(int)*
* * 3. `mod_name` *(str)*
* * 4. `mod_size` *(int)* *(в байтах)*
* * 5. `data_event` *(`YYYY-MM-DD HH:MI:SS`)* - дата обновления на сервере *(добавление/обновление)*.
* * 6. `source` *(str)* - первоисточник.


### `/list/games/{page_size}/{page_number}/{source}`
Возвращает список игр, моды к которым есть на сервере. Нужно передать:

1. `page_size` *(int)* - количество элементов которое будет возвращено.
2. `page_number` *(int)* - "страница" которая будет возвращена. Рассчитывается как `page_size * page_number = offeset`.
3. `source` *(str)* *(опционально)* - фильтрация по источнику, например `steam`. **Если источник не важен** передать `ALL`.

**JSON ответ:**
```
{"database_size": int, "request": {"page_size": int, "page_number": int, "offeset": int, "source": str}, "results": list[list]}
```
* `database_size` - общий размер базы данных с текущими фильтрами *(`source`)*.
* `request` - возвращает словарь с вашим запросом.
* * `offeset` - итоговый рассчитанный сдвиг с `0` элемента в **БД**.
* `results` - возвращает массив массивов в котором содержатся все элементы соответствующие текущему запросу *(пустой список если ничего не найдено)*.
Содержание под массива:
* * 1. `game_id` *(int)*
* * 2. `game_name` *(str)*
* * 3. `data_event` *(`YYYY-MM-DD HH:MI:SS`)* - дата обновления на сервере *(добавление/обновление)*.
* * 4. `source` *(str)* - первоисточник.


### `/info/mod/{mod_id}`
Возвращает информацию об конкретном моде, а так же его состояние на сервере. 
Нужно передать только `ID` мода.

**JSON ответ:**
```
{"request": {"mod_id": int}, "condition": int, "downloaded": list / null, "requested": list / null, "not_loaded": list[list] / null}
```
* `request` - возвращает словарь с вашим запросом.
* `condition` - возвращает состояние на сервере в виде числа.
* * `-1` - мод не зарегистрирован на сервере.
* * `0` - мод загружен на сервер.
* * `1` - мод пытается загрузиться, внесен в список модов которые ранее не удалось загрузить.
* * `2` - мод пытается загрузиться.
* * `3` - мода нет на сервере, внесен в список модов которые ранее не удалось загрузить.
* `downloaded` - возвращает итог поиска в базе загруженных модов.
Если найден - возвращает информацию о нем. Если не найден - возвращает `null`.
* `requested` - возвращает итог поиска в базе модов в состоянии загрузки на сервер.
Если найден - возвращает информацию о нем. Если не найден - возвращает `null`.
* `not_loaded` - возвращает итог поиска в базе модов которые не удалось загрузить.
Если найден - возвращает список списков *(массив массивов)* с информацией о всех попытках загрузить мод.
Если не найден - возвращает `null`.

Вид списка при успешном поиске:
* 1. `game_id` *(int)*
* 2. `mod_id` *(int)*
* 3. `mod_name` *(str)*
* 4. `mod_size` *(int)* *(в байтах)*
* 5. `data_event` *(`YYYY-MM-DD HH:MI:SS`)* - дата обновления на сервере *(добавление/обновление)*.
* 6. `source` *(str)* - первоисточник.


### `/info/game/{game_id}`
Возвращает информацию о конкретной игре. 
Нужно передать только `ID` игры.

**JSON ответ:**
```
{"request": {"game_id": int}, "results": list / null}
```
* `request` - возвращает словарь с вашим запросом.
* `results` - возвращает массив в котором содержится информация об игре.
Если игра не найдена, возвращает `null`. Содержание массива:
* * 1. `game_id` *(int)*
* * 2. `game_name` *(str)*
* * 3. `data_event` *(`YYYY-MM-DD HH:MI:SS`)* - дата обновления на сервере *(добавление/обновление)*.
* * 4. `source` *(str)* - первоисточник.

## Установка на свой сервер

Если  вы хотите по какой-то причине поднять сервер у себя, вот небольшая заметки :)

1. Убедитесь что вы установили все зависимости из requirements.txt и у вас не возникли ошибки!
2. Для корректного запуска сервера на Linux вам нужно выполнить [этот пункт](https://github.com/wmellema/Py-SteamCMD-Wrapper#prerequisites)
3. Если у вас возникли какие-то проблемы с установкой - пишите мне!
