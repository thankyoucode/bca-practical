13. Find out the largest orders of salesman 1002 and 1007.
```SQL
SELECT snum, MAX(amount)'MAX_amount'
FROM `order`
WHERE snum IN (1002, 1007)
GROUP BY snum;
```
table view:
| snum | MAX_amount |
|------|------------|
| 1007 |    1098.25 |
| 1002 |    5160.45 |
