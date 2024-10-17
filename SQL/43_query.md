43. Create another table Day totals with two attributes date and total and insert rows into this Table from order table.

```SQL
CREATE TABLE daytotals AS 
    SELECT odate, count(odate) 'total' FROM `order`
    GROUP BY odate;
```
table view:
Query OK, 4 rows affected (0.17 sec)
Records: 4  Duplicates: 0  Warnings: 0
```SQL
SELECT * FROM daytotals;
```
| odate      | total |
|------------|-------|
| 1999-03-10 |     4 |
| 1999-04-10 |     2 |
| 1999-05-10 |     3 |
| 1999-06-10 |     1 |
4 rows in set (0.00 sec)
