from sqlalchemy import create_engine, Column, Integer, String, DateTime, Table, ForeignKey
from sqlalchemy.orm import relationship
from sqlalchemy.ext.declarative import declarative_base


engine = create_engine('sqlite:///sql/database.db')
base = declarative_base()


# Связывающие БД
game_tags = Table('unity_games_tags', base.metadata, # Теги для игр
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_games.id'))
)

allowed_mods_tags = Table('unity_allowed_mods_tags', base.metadata, # Разрешенные игрой теги для модов
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_mods.id'))
)

mods_tags = Table('unity_mods_tags', base.metadata, # Теги для игр
    Column('mod_id', Integer, ForeignKey('mods.id')),
    Column('tag_id', Integer, ForeignKey('tags_for_mods.id'))
)

games_mods = Table('unity_games_mods', base.metadata, # Принадлежность мода игре
    Column('game_id', Integer, ForeignKey('games.id')),
    Column('mod_id', Integer, ForeignKey('mods.id'))
)

mods_dependencies = Table('unity_mods_dependencies', base.metadata, # Зависимости мода
    Column('mod_id', Integer, ForeignKey('mods.id')),
    Column('dependence', Integer, ForeignKey('mods.id')),
    extend_existing=True
)


# Основные БД
class Game(base): # Таблица "игры"
    __tablename__ = 'games'
    id = Column(Integer, primary_key=True)
    name = Column(String)
    type = Column(String)
    logo = Column(String)

    short_description = Column(String)
    description = Column(String)

    mods_downloads = Column(Integer)

    creation_date = Column(DateTime)

    source = Column(String)

    tags = relationship('GameTag', secondary=game_tags, backref='games')
    allowed_tags_for_mods = relationship('ModTag', secondary=allowed_mods_tags, backref='games')

class Mod(base): # Таблица "моды"
    __tablename__ = 'mods'
    id = Column(Integer, primary_key=True)
    name = Column(String)

    description = Column(String)

    size = Column(Integer)

    condition = Column(Integer) #0 - загружен, 1 - загружается

    date_creation = Column(DateTime)
    date_update = Column(DateTime)
    date_request = Column(DateTime)

    source = Column(String)
    downloads = Column(Integer)

    tags = relationship('ModTag', secondary=mods_tags, backref='mods')
    dependencies = relationship('Mod', secondary=mods_dependencies, primaryjoin=(mods_dependencies.c.mod_id == id),
        secondaryjoin=(mods_dependencies.c.dependence == id), backref='mods',
        foreign_keys=[mods_dependencies.c.mod_id, mods_dependencies.c.dependence]
    )

    resources_id = Column(Integer, ForeignKey('resources_mods.id'))
    resources_mods = relationship('ResourceMod', back_populates='owner')

class ResourceMod(base): # Ресурсы (скриншоты и лого)
    __tablename__ = 'resources_mods'
    id = Column(Integer, primary_key=True)
    type = Column(String)
    url = Column(String)
    date_event = Column(DateTime)
    size = Column(Integer)

    #mod_id = Column(Integer, ForeignKey('mods.id'))  # Внешний ключ на таблицу Mod
    owner = relationship('Mod', back_populates='resources_mods')


# Теги
class GameTag(base): # Теги для игр
    __tablename__ = 'tags_for_games'
    id = Column(Integer, primary_key=True)
    name = Column(String)

class ModTag(base): # Теги для модов
    __tablename__ = 'tags_for_mods'
    id = Column(Integer, primary_key=True)
    name = Column(String)


base.metadata.create_all(engine)