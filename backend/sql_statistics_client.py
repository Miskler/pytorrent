from sqlalchemy import create_engine, Column, Integer, String, DateTime, Date
from sqlalchemy.orm import sessionmaker
from sqlalchemy.ext.declarative import declarative_base


engine = create_engine('sqlite:///sql/statistics.db')
base = declarative_base()


# Определяем модель
class statistics_hour(base):
    __tablename__ = 'statistics_hour'
    date_time = Column(DateTime, primary_key=True)

    download_steam = Column(Integer)
    download = Column(Integer)

    info_mod = Column(Integer)
    info_game = Column(Integer)

    list_mods = Column(Integer)
    list_games = Column(Integer)

    successful_downloads_on_server = Column(Integer)
    failed_downloads_on_server = Column(Integer)

    files_sent = Column(Integer)

class statistics_day(base):
    __tablename__ = 'statistics_day'
    date = Column(Date, primary_key=True)

    download_steam = Column(Integer)
    download = Column(Integer)

    info_mod = Column(Integer)
    info_game = Column(Integer)

    list_mods = Column(Integer)
    list_games = Column(Integer)

    successful_downloads_on_server = Column(Integer)
    failed_downloads_on_server = Column(Integer)

    files_sent = Column(Integer)

class processing_time(base):
    __tablename__ = 'processing_time'
    time = Column(DateTime, primary_key=True)
    type = Column(String)
    delay = Column(Integer)


# Создаем таблицу в базе данных
base.metadata.create_all(engine)