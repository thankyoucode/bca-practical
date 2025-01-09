27. List all customers located in cities where salesman "Niraj" has customers.

```SQL
SELECT c.*
FROM `customer` c, `salesman` s
WHERE c.city = s.city AND s.sname = "NIRAJ";
```
```SQL
SELECT *
FROM `customer`
WHERE city IN ( SELECT city FROM `salesman` WHERE sname = "NIRAJ");
```
table view:
| CNUM | CNAME   | CITY  | RATING | SNUM |
|------|---------|-------|--------|------|
| 2003 | LAXIT   | SURAT |    200 | 1002 |
| 2006 | CHAMPAK | SURAT |    300 | 1007 |
2 rows in set (0.00 sec)
