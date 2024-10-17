8. List all order for more than Rs. 1000 except the orders of snum 1006 of 10/03/99.
```SQL
SELECT *
FROM `order`
WHERE amount > 1000 AND snum = 1006 AND odate = '1999-03-10';
```
table view:
Empty set
9. List all orders taken on 10th March(3), April(4) and June(6) 1999.
```SQL
SELECT *
FROM `order`
WHERE  odate IN ('1999-03-10', '1999-04-10', '1999-06-10');
```
```SQL
SELECT *
FROM `order`
WHERE  odate = '1999-03-10' OR odate = '1999-04-10' OR odate = '1999-06-10';
```
table view:
| ONUM | AMOUNT  | ODATE      | CNUM | SNUM |
|------|---------|------------|------|------|
| 3001 |   18.69 | 1999-03-10 | 2006 | 1007 |
| 3002 |  767.19 | 1999-03-10 | 2001 | 1001 |
| 3003 |  1900.1 | 1999-03-10 | 2007 | 1004 |
| 3004 | 5160.45 | 1999-03-10 | 2003 | 1002 |
| 3005 | 1098.25 | 1999-04-10 | 2006 | 1007 |
| 3006 | 1713.12 | 1999-04-10 | 2002 | 1003 |
| 3010 | 9898.87 | 1999-06-10 | 2001 | 1001 |
7 rows in set (0.06 sec)
