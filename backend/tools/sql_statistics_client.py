from sqlalchemy import create_engine, Column, Integer, String
from sqlalchemy.orm import sessionmaker
from sqlalchemy.ext.declarative import declarative_base

# Создаем соединение с базой данных
engine = create_engine('sqlite:///mydatabase.db')

# Создаем базовый класс для объявления моделей
base = declarative_base()

# Определяем модель
class statistics_hour(base):
    __tablename__ = 'statistics_hour'
    date_time = Column(Integer, primary_key=True)

    name = Column(String)
    email = Column(String)

# Создаем таблицу в базе данных
base.metadata.create_all(engine)