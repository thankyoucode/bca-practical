47. Delete the salesman who produce the lowest order for each day

```SQL
DELETE FROM salesman
WHERE snum IN (
    SELECT snum
    FROM `order`
    WHERE amount IN (
        SELECT min(amount)
        FROM `order`
        GROUP BY odate
    )
);
```
output view:
Query OK, 3 rows affected (0.07 sec)
