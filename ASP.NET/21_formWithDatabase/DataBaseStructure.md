## fields in database table

Database: developer
Table: student

### student fild:

| Column Name | Data Type    | Description                                                      |
| ----------- | ------------ | ---------------------------------------------------------------- |
| roll_no     | INT          | Unique identifier for the roll number, typically an integer.     |
| sem         | VARCHAR(5)   | Semester number, typically an string.                            |
| first_name  | VARCHAR(50)  | First name of the individual, up to 50 characters.               |
| last_name   | VARCHAR(50)  | Last name of the individual, up to 50 characters.                |
| phone_no    | VARCHAR(15)  | Phone number, allowing for various formats, up to 15 characters. |
| birth_date  | DATE         | Birth date of the individual.                                    |
| gender      | CHAR(10)     | Gender, typically a single string (e.g., 'Male', 'Female').      |
| hobby       | VARCHAR(255) | Hobby or interests, allowing for up to 255 characters.           |
| email       | VARCHAR(100) | Email address, up to 100 characters.                             |
| password    | VARCHAR(255) | Password, up to 255 characters to support hashed passwords.      |
