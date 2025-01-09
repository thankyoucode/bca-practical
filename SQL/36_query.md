36. Find all the customers who have greater rating than every customer in "Rome".

```SQL
SELECT *
FROM `customer`
WHERE rating > (
    SELECT max(rating)
    FROM `customer`
    WHERE city = "ROME"
);
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2004 | GOVIND  | BOMBAY |    300 | 1002 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
2 rows in set (0.07 sec)
