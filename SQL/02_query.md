2. Give all the information about all the customers with salesman number 1001.
```SQL
SELECT *
FROM `customer`
WHERE snum = 1001;
```
table view:
| CNUM | CNAME  | CITY   | RATING | SNUM |
|------|--------|--------|--------|------|
| 2001 | HARDIK | LONDON |    100 | 1001 |
| 2005 | CHANDU | LONDON |    100 | 1001 |
