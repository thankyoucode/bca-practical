45. Increse the rating of all customers in "Rome" by 100.

```SQL
UPDATE `customer`
SET rating = rating + 100
WHERE city = "ROME";
```
output view:
Query OK, 2 rows affected (0.08 sec)
Rows matched: 2  Changed: 2  Warnings: 0
