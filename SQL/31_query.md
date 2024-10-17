31. Find all orders of salesman who services "Hardik".

```SQL
SELECT *
FROM `order`
WHERE snum IN (
    SELECT snum 
    FROM `customer`
    WHERE cname = "HARDIK"
);
```
table view:
| ONUM | AMOUNT  | ODATE      | CNUM | SNUM |
|------|---------|------------|------|------|
| 3002 |  767.19 | 1999-03-10 | 2001 | 1001 |
| 3008 |    4723 | 1999-05-10 | 2005 | 1001 |
| 3010 | 9898.87 | 1999-06-10 | 2001 | 1001 |
3 rows in set (0.00 sec)
