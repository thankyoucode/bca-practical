7. List all customers excluding those with rating <= 100 or they are located in Rome
```SQL
SELECT *
FROM `customer`
WHERE rating > 100 OR city != 'ROME';
```
```SQL
SELECT *
FROM `customer`
WHERE NOT (rating <= 100 AND city = 'ROME');
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2001 | HARDIK  | LONDON |    100 | 1001 |
| 2002 | GITA    | ROME   |    200 | 1003 |
| 2003 | LAXIT   | SURAT  |    200 | 1002 |
| 2004 | GOVIND  | BOMBAY |    300 | 1002 |
| 2005 | CHANDU  | LONDON |    100 | 1001 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
