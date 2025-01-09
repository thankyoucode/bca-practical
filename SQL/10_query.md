10. List all customers whose names begin with a latter 'C'.
```SQL
SELECT *
FROM `customer`
WHERE cname LIKE 'C%';
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2005 | CHANDU  | LONDON |    100 | 1001 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
