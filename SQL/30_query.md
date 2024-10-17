30. Extract all orders of miti.

```SQL
SELECT o.*
FROM `order` o, `salesman` s
WHERE o.snum = s.snum AND s.sname = "MITI";
```
```SQL
SELECT *
FROM `order`
WHERE snum = (
    SELECT snum
    FROM `salesman`
    WHERE sname = "MITI" );
```
table view:
| ONUM | AMOUNT  | ODATE      | CNUM | SNUM |
|------|---------|------------|------|------|
| 3006 | 1713.12 | 1999-04-10 | 2002 | 1003 |
1 row in set (0.00 sec)
