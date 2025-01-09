12. List all orders with zero or NULL amount.
```SQL
SELECT *
FROM `order`
WHERE amount IN (0, NULL);
```
table view:
Empty set (0.00 sec)
