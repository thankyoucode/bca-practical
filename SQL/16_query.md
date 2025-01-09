16. Find the largest order taken by each salesman on each date.
```SQL
SELECT odate, snum, MAX(amount)'amount'
FROM `order`
GROUP BY odate, snum;
```
table view:
| odate      | snum | amount  |
|------------|------|---------|
| 1999-03-10 | 1007 |   18.69 |
| 1999-03-10 | 1001 |  767.19 |
| 1999-03-10 | 1004 |  1900.1 |
| 1999-03-10 | 1002 | 5160.45 |
| 1999-04-10 | 1007 | 1098.25 |
| 1999-04-10 | 1003 | 1713.12 |
| 1999-05-10 | 1002 | 1309.95 |
| 1999-05-10 | 1001 |    4723 |
| 1999-06-10 | 1001 | 9898.87 |
