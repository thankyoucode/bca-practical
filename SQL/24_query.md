24. List all orders by the customers not located in the same city as their salesman.

```SQL
SELECT o.*
FROM `order` o, `customer` c, `salesman` s
WHERE o.cnum = c.cnum and o.snum = s.snum and c.city != s.city;
```
table view:
| ONUM | AMOUNT  | ODATE      | CNUM | SNUM |
|------|---------|------------|------|------|
| 3001 |   18.69 | 1999-03-10 | 2006 | 1007 |
| 3003 |  1900.1 | 1999-03-10 | 2007 | 1004 |
| 3005 | 1098.25 | 1999-04-10 | 2006 | 1007 |
| 3006 | 1713.12 | 1999-04-10 | 2002 | 1003 |
| 3007 |   75.75 | 1999-05-10 | 2004 | 1002 |
| 3009 | 1309.95 | 1999-05-10 | 2004 | 1002 |
6 rows in set (0.08 sec)
