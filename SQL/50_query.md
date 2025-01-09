50. Give the commands to create our sample tables (salesman, customer, orders) with all the Necessary constranint like PRIMARY KEY, NOT NULL, UNIQUE, FOREING KEY.

Salesman2 sample table:
```SQL
CREATE TABLE `Salesman2` (
	SNUM numeric(4) PRIMARY KEY,
    SNAME varchar(30) NOT NULL,
    CITY varchar(30),
    `COMMISSION( % )` numeric(2) CHECK(0 < commission AND commission < 15)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
```
output view:
Table Created.
Customer2 sample table:
```SQL
DROP TABLE IF EXISTS `Customer`;
CREATE TABLE `Customer2` (
	CNUM numeric(4) PRIMARY KEY,
    CNAME varchar(30) NOT NULL,
    CITY varchar(30),
    RATING numeric(4),
    SNUM numeric(4) REFERENCES `Salesman2`
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
```
output view:
Table Created.
Order2 sample table:
```SQL
DROP TABLE IF EXISTS `Order`;
CREATE TABLE `Order2` (
	ONUM numeric(4) UNIQUE NOT NULL,
    AMOUNT float NOT NULL,
    ODATE date,
    CNUM numeric(4) REFERENCES `Costomer2`,
    SNUM numeric(4) REFERENCES `Salesman2`
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
```
output view:
Table Created.
