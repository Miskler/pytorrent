import telebot
import json
from telebot.async_telebot import AsyncTeleBot
from telebot.types import BotDescription, BotCommand
from telebot.util import quick_markup

with open('key.json', 'r') as file:
    # Загружаем содержимое файла в переменную
    API_TOKEN = json.load(file)["key"]

bot = AsyncTeleBot(API_TOKEN)

# Handle '/start' and '/help'
@bot.message_handler(commands=['help', 'start'])
async def send_welcome(message):
    await bot.reply_to(message, """\
Этот бот позволяет скачивать моды со Steam через чат Telegram! 💨\n
Разработчики не несут ответственность за контент получаемый через бота и ваши намеренья как его использовать. 📄\n
А так же продолжая использовать бота вы подтверждаете, что официально приобрели игру/программу на одной из площадок где она представлена! 🛒
    """)
    await bot.reply_to(message, """\
Чтобы получить ZIP архив отправьте ссылку на мод или ID мода в Steam и бот в ответ даст ZIP архив 🤝
    """)


# Handle all other messages with content_type 'text' (content_types defaults to ['text'])
@bot.message_handler(func=lambda message: True)
async def echo_message(message):
    message.text
    await bot.reply_to(message, message.text)


import asyncio
asyncio.run(bot.polling())