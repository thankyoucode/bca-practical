32. List all orders that are greater than the average of april 10, 1999.

```SQL
SELECT *
FROM `order`
WHERE amount > (
    SELECT avg(amount)
    FROM `order`
    WHERE odate = "1999-04-10"
);
```
table view:
| ONUM | AMOUNT  | ODATE      | CNUM | SNUM |
|------|---------|------------|------|------|
| 3003 |  1900.1 | 1999-03-10 | 2007 | 1004 |
| 3004 | 5160.45 | 1999-03-10 | 2003 | 1002 |
| 3006 | 1713.12 | 1999-04-10 | 2002 | 1003 |
| 3008 |    4723 | 1999-05-10 | 2005 | 1001 |
| 3010 | 9898.87 | 1999-06-10 | 2001 | 1001 |
5 rows in set (0.04 sec)
