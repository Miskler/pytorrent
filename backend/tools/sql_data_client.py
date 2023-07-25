from sqlalchemy import create_engine, Column, Integer, String, DateTime, Table, ForeignKey
from sqlalchemy.orm import relationship
from sqlalchemy.ext.declarative import declarative_base


engine = create_engine('sqlite:///sql/database.db')
base = declarative_base()


# Связывающие БД
game_tags = Table('games_tags', base.metadata, # Теги для игр
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_games.id'))
)

allowed_mods_tags = Table('allowed_mods_tags', base.metadata, # Разрешенные игрой теги для модов
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_mods.id'))
)

mods_tags = Table('mods_tags', base.metadata, # Теги для игр
    Column('mod_id', Integer, ForeignKey('mods.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_mods.id'))
)

games_mods = Table('games_mods', base.metadata, # Принадлежность мода игре
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('mod_id', Integer, ForeignKey('mods.id'))
)

mods_dependencies = Table('mods_dependencies', base.metadata, # Зависимости мода
    Column('mod_id', Integer, ForeignKey('mods.id')),
    Column('dependence', Integer, ForeignKey('mods.id')),
    extend_existing=True
)


# Основные БД
class game(base): # Таблица "игры"
    __tablename__ = 'games'
    id = Column(Integer, primary_key=True)
    name = Column(String)
    logo = Column(String)

    short_description = Column(String)
    description = Column(String)

    mods_downloads = Column(Integer)

    creation_date = Column(DateTime)

    tags = relationship('tags_for_games', secondary=game_tags, backref='games')
    allowed_tags_for_mods = relationship('tags_for_mods', secondary=allowed_mods_tags, backref='games')

class mod(base): # Таблица "моды"
    __tablename__ = 'mods'
    id = Column(Integer, primary_key=True)
    name = Column(String)

    description = Column(String)

    size = Column(Integer)

    date_creation = Column(DateTime)
    date_update = Column(DateTime)
    date_request = Column(DateTime)

    source = Column(String)
    downloads = Column(Integer)

    tags = relationship('tags_for_mods', secondary=mods_tags, backref='mods')
    dependencies = relationship('mods', secondary=mods_dependencies, backref='mods')

class resource_mod(base): # Ресурсы (скриншоты и лого)
    __tablename__ = 'resources_mods'
    id = Column(Integer, primary_key=True)
    type = Column(String)
    url = Column(String)
    date_event = Column(DateTime)
    size = Column(Integer)

    owner = relationship('mod', back_populates='resources_mods')


# Теги
class game_tag(base): # Теги для игр
    __tablename__ = 'tags_for_games'
    id = Column(Integer, primary_key=True)
    name = Column(String)

class mod_tag(base): # Теги для модов
    __tablename__ = 'tags_for_mods'
    id = Column(Integer, primary_key=True)
    name = Column(String)


base.metadata.create_all(engine)