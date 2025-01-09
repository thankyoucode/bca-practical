import os

import pandas as pd
import pymysql
from dotenv import load_dotenv

load_dotenv()


MYSQL_PASSWORD = os.getenv("MYSQL_PASSWORD")
mydb = pymysql.connect(
    host="localhost", user="root", password=MYSQL_PASSWORD, database="student"
)
mycursor = mydb.cursor()


def select_all():
    df = pd.read_sql_query("SELECT * FROM review", mydb)
    print(df)


def search_book_like(book: str) -> bool:
    query = f"SELECT * FROM review WHERE book LIKE '%{book}%'"
    df = pd.read_sql_query(query, mydb)
    print(df)
    return not df.empty


# select_all()
search_book_like("Learning")
