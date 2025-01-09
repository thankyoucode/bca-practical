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

df = pd.read_sql_query("SELECT * FROM review", mydb)
print(df)


def select_bookreview(id: int) -> bool:
    df = pd.read_sql_query(f"SELECT * FROM review WHERE id={id}", mydb)
    print(df)
    return True if len(df) == 1 else False


def update_bookreview(id: int) -> None:
    if not select_bookreview(id):
        print(f"id: {id}, not any record")
        return

    book = input("Book (empty for no change): ")
    message = input("Message (empty for no change): ")

    book_update = f"book='{book}'," if book else None
    message_update = f"message='{message}'" if message else None
    if book_update or message_update:
        update = f"UPDATE review SET {book_update} {message_update} WHERE id={id}"
        mycursor.execute(update)


def delete_bookreview(id: int) -> None:
    if not select_bookreview(id):
        print(f"id: {id}, not any record")
        return
    conform = input("you wont to delete (y/n):")
    if conform == "y":
        delete = f"DELETE FROM review WHERE id={id}"
        mycursor.execute(delete)


select_bookreview(2)
# update_bookreview(mycursor, 2)
# delete_bookreview(mycursor, 2)

mydb.commit()
mydb.close()
