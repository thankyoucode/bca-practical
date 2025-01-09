import pandas as pd
import pymysql

"""
for using pymysql we need mysql server in local system or online server for use
normaly in python using SQLite for simple level dabase operation
"""


def create_database() -> None:
    """
    creating 'student' database for mysql operation
    """
    mydb = pymysql.connect(host="localhost", user="root", password="Teto270+0")
    mycursor = mydb.cursor()
    mycursor.execute("CREATE DATABASE IF NOT EXISTS student")


# create_database()

mydb = pymysql.connect(
    host="localhost", user="root", password="Teto270+0", database="student"
)
mycursor = mydb.cursor()

# creating table for student review on books
mycursor.execute("DROP TABLE IF EXISTS review")

create_table = """
    CREATE TABLE IF NOT EXISTS review(
        id INT PRIMARY KEY AUTO_INCREMENT,
        name varchar(50),
        email varchar(50),
        book varchar(100),
        message varchar(255)
    )
"""

mycursor.execute(create_table)

# insert 12 data to the review with real popular books in ML and computer science
book_reviews = [
    (
        "Alice",
        "alice@example.com",
        "Deep Learning",
        "A comprehensive guide to machine learning and neural networks.",
    ),
    (
        "Bob",
        "bob@example.com",
        "Artificial Intelligence: A Modern Approach",
        "An essential read for anyone interested in AI.",
    ),
    (
        "Charlie",
        "charlie@example.com",
        "Pattern Recognition and Machine Learning",
        "In-depth coverage of statistical pattern recognition techniques.",
    ),
    (
        "David",
        "david@example.com",
        "The Elements of Statistical Learning",
        "A must-have book for understanding statistical learning methods.",
    ),
    (
        "Eve",
        "eve@example.com",
        "Machine Learning: A Probabilistic Perspective",
        "Great insights into the probabilistic approach to machine learning.",
    ),
    (
        "Frank",
        "frank@example.com",
        "Computer Vision: Algorithms and Applications",
        "A detailed exploration of computer vision and its practical applications.",
    ),
    (
        "Grace",
        "grace@example.com",
        "Reinforcement Learning: An Introduction",
        "An excellent introduction to reinforcement learning and its algorithms.",
    ),
    (
        "Heidi",
        "heidi@example.com",
        "Natural Language Processing with Python",
        "A practical guide to NLP using Python and its libraries.",
    ),
    (
        "Ivan",
        "ivan@example.com",
        "Hands-On Machine Learning with Scikit-Learn, Keras, and TensorFlow",
        "A practical approach to machine learning with real-world examples.",
    ),
    (
        "Judy",
        "judy@example.com",
        "Data Mining: Concepts and Techniques",
        "An insightful book into the concepts of data mining and its techniques.",
    ),
    (
        "Mallory",
        "mallory@example.com",
        "Introduction to the Theory of Computation",
        "A fundamental book for understanding computational theory.",
    ),
    (
        "Niaj",
        "niaj@example.com",
        "Computer Networking: A Top-Down Approach",
        "A thorough exploration of computer networking principles.",
    ),
]

insert_query = """
    INSERT INTO review (name, email, book, message)
    VALUES (%s, %s, %s, %s)
"""

mycursor.executemany(insert_query, book_reviews)
mydb.commit()

df = pd.read_sql_query("SELECT * FROM review", mydb)
print(df)

mydb.close()
