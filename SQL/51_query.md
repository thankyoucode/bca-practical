51. Create a view called Big orders which stores all orders larger than Rs. 8000.

```SQL
CREATE VIEW big_orders AS
    SELECT * FROM `order`
    WHERE amount > 8000;
```
output view:
Query OK, 0 rows affected (0.15 sec)
