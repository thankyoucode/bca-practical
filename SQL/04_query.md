4. List of snum of all salesman with orders in order table without duplicates.
```SQL
USE shop_management;
SELECT distinct(snum)
FROM `order`
ORDER BY snum;
```
table view:
| snum |
|------|
| 1001 |
| 1002 |
| 1003 |
| 1004 |
| 1007 |
