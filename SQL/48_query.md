48. Delete all customers with no current orders.

```SQL
DELETE FROM customer
WHERE cnum NOT IN (
    SELECT DISTINCT(cnum)
    FROM `order` 
);
```
output view:
Query OK, 2 rows affected (0.12 sec)
