21. List all customers in descending order of rating

```SQL
SELECT * 
FROM `customer` 
ORDER BY  rating DESC;
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2004 | GOVIND  | BOMBAY |    300 | 1002 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
| 2002 | GITA    | ROME   |    200 | 1003 |
| 2003 | LAXIT   | SURAT  |    200 | 1002 |
| 2001 | HARDIK  | LONDON |    100 | 1001 |
| 2005 | CHANDU  | LONDON |    100 | 1001 |
| 2007 | PRATIK  | ROME   |    100 | 1004 |
7 rows in set (0.10 sec)
