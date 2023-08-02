import json
from telebot.async_telebot import AsyncTeleBot
from urllib.parse import urlparse
from urllib.parse import parse_qs
import requests
import time
import email.utils
import pymorphy2

with open('key.json', 'r') as file:
    # Загружаем содержимое файла в переменную
    API_TOKEN = json.load(file)["key"]

bot = AsyncTeleBot(API_TOKEN)

# Handle '/start' and '/help'
@bot.message_handler(commands=['help', 'start'])
async def send_welcome(message):
    await bot.reply_to(message, """\
Этот бот позволяет скачивать моды со *Steam* через чат *Telegram!* 💨\n
Разработчики не несут ответственность за контент получаемый через бота и ваши намеренья как его использовать. 📄\n
А так же продолжая использовать бота вы подтверждаете, что официально приобрели игру/программу на одной из площадок где она представлена! 🛒
    """, parse_mode="Markdown")
    await bot.reply_to(message, """\
Чтобы получить `ZIP` архив отправьте ссылку на мод или `ID` мода в *Steam* и бот в ответ даст `ZIP` архив 🤝
    """, parse_mode="Markdown")


# Handle all other messages with content_type 'text' (content_types defaults to ['text'])
@bot.message_handler(func=lambda message: True)
async def echo_message(message):
    try:
        start_time = time.time()
        mes = message.text

        if mes.startswith("https://steamcommunity.com/sharedfiles/filedetails/") or mes.startswith("https://steamcommunity.com/workshop/filedetails/"):
            parsed = urlparse(mes,
                         "highlight=params#url-parsing")
            captured_value = parse_qs(parsed.query)
            try:
                mes = captured_value['id'][0]
            except:
                await bot.reply_to(message, "Ты мне какую-то не правильную ссылку скинул! 🧐")

        if mes.isdigit():
            mes = int(mes)
            if mes <= 0:
                await bot.reply_to(message, "Я даже без проверки знаю, что такого мода нету :)")
            else:
                try:
                    result = requests.get(url=f"https://43093.zetalink.ru:8000/download/steam/{str(mes)}", timeout=5)
                except:
                    await bot.reply_to(message, "Похоже, что сервер не отвечает 😔 _(point=1)_", parse_mode="Markdown")
                    return -1

                if result.headers.get('content-type') == "application/zip":
                    await bot.send_document(
                        message.chat.id,
                        visible_file_name=get_name(result.headers["content-disposition"]),
                        document=result.content,
                        reply_to_message_id=message.id,
                        timeout=10)
                    await bot.reply_to(message, f"Ваш запрос занял {format_seconds(round(time.time()-start_time, 1))}")
                elif result.headers.get('content-type') == "application/json":
                    data = json.loads(result.content)
                    if data["error_id"] == 0 or data["error_id"] == 3:
                        await bot.reply_to(message, "На сервере нету этого мода, но он сейчас его загрузит! _(это может занять некоторое время)_", parse_mode="Markdown")
                        if data.get("unsuccessful_attempts", None) == True:
                            await bot.reply_to(message, "Ранее этот мод не удавалось загрузить!", parse_mode="Markdown")

                        for i in range(60):
                            time.sleep(1)
                            try:
                                res = requests.get(url=f"https://43093.zetalink.ru:8000/info/mod/{str(mes)}",
                                                        timeout=10)
                            except:
                                await bot.reply_to(message, "Похоже, что сервер не отвечает 😔 _(point=2)_", parse_mode="Markdown")
                                return -1
                            if res.headers.get('content-type') == "application/json":
                                data = json.loads(res.content)
                                if data["result"] == None:
                                    await bot.reply_to(message, "Серверу не удалось загрузить этот мод 😢")
                                    return -1
                                elif data["result"]["condition"] <= 1:
                                    try:
                                        result = requests.get(
                                            url=f"https://43093.zetalink.ru:8000/download/{str(mes)}", timeout=10)
                                    except:
                                        await bot.reply_to(message, "Похоже, что сервер не отвечает 😔 _(point=3)_", parse_mode="Markdown")
                                        return -1

                                    if result.headers.get('content-type') == "application/zip":
                                        await bot.send_document(
                                            message.chat.id,
                                            visible_file_name=get_name(result.headers["content-disposition"]),
                                            document=result.content,
                                            reply_to_message_id=message.id,
                                            timeout=10)
                                        await bot.reply_to(message, f"Ваш запрос занял {format_seconds(round(time.time()-start_time, 1))}")
                                    else:
                                        await bot.reply_to(message, "Сервер прислал неожиданный ответ 😧 _(point=4)_",
                                                           parse_mode="Markdown")

                                    return
                            else:
                                await bot.reply_to(message, "Сервер прислал неожиданный ответ 😧 _(point=1)_", parse_mode="Markdown")
                                return
                        await bot.reply_to(message, "Превышено время ожидания ответа с сервера!")
                        return -1

                    elif data["error_id"] == 1:
                        await bot.reply_to(message,
                            "Сервер запускается и не может сейчас грузить моды! Повтори попытку через пару минут :)")
                    elif data["error_id"] == 2:
                        await bot.reply_to(message, "Сервер говорит что такого мода не существует 😢")
                    else:
                        await bot.reply_to(message, "Сервер прислал неожиданный ответ 😧 _(point=2)_", parse_mode="Markdown")
                else:
                    await bot.reply_to(message, "Сервер прислал неожиданный ответ 😧 _(point=3)_", parse_mode="Markdown")
        else:
            if mes.startswith("https://steamcommunity.com") or mes.startswith("https://store.steampowered.com"):
                await bot.reply_to(message, "Мне нужна ссылка конкретно на мод! _(или его ID)_", parse_mode="Markdown")
            elif mes.startswith("https://") or mes.startswith("http://"):
                await bot.reply_to(message, "Пока что я умею скачивать только со Steam 😿")
            else:
                await bot.reply_to(message, "Если ты хочешь скачать мод, то просто скинь ссылку или `ID` мода в чат!", parse_mode="Markdown")
    except:
        await bot.reply_to(message, "Ты вызвал странную ошибку...\nПопробуй загрузить мод еще раз!", parse_mode="Markdown")

def format_seconds(seconds):
    try:
        morph = pymorphy2.MorphAnalyzer()
        word = 'секунда'
        parsed_word = morph.parse(word)[0]
        res = f"{seconds} {parsed_word.make_agree_with_number(seconds).word}"
    except:
        res = "ERROR"
    return res

def get_name(head:str):
    if head.startswith("attachment; filename="):
        return head.split("attachment; filename=")[-1]
    else:
        return email.utils.unquote(head.split("filename*=utf-8''")[-1])

import asyncio
asyncio.run(bot.polling())