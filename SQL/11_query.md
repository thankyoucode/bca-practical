11. List all customers whose names begins with letter 'A' to 'G'
```SQL
SELECT *
FROM `customer`
WHERE cname
BETWEEN 'A%' AND 'H%';
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2002 | GITA    | ROME   |    200 | 1003 |
| 2004 | GOVIND  | BOMBAY |    300 | 1002 |
| 2005 | CHANDU  | LONDON |    100 | 1001 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
