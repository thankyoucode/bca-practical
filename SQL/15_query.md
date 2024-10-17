15. Count the no. of salesman currently having orders.
```SQL
SELECT count(DISTINCT(snum))'active_salesman'
FROM `order`;
```
table view:
| active_salesman |
|-----------------|
|               5 |
