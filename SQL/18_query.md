| 2006 |      18.69 |
| 2001 |     767.19 |
| 2007 |     1900.1 |
| 2003 |    5160.45 |
| 2002 |    1713.12 |
| 2004 |      75.75 |
| 2005 |       4723 |
7 rows in set (0.00 sec)


18. Find out the customer in alpabetical order whose name begines with 'G'.
```SQL
SELECT *
FROM `customer`
WHERE cname LIKE 'G%'
ORDER BY cname;
```
table view:
|------|--------|--------|--------|------|
| CNUM | CNAME  | CITY   | RATING | SNUM |
| 2002 | GITA   | ROME   |    200 | 1003 |
| 2004 | GOVIND | BOMBAY |    300 | 1002 |
2 rows in set (0.40 sec)
