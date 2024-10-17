25. List all customers serviced by salesman with commission above 12%.

```SQL
SELECT c.*
FROM `customer` c, `salesman` s
WHERE c.snum = s.snum AND s.`commission( % )` > 12;
```
table view:
| CNUM | CNAME  | CITY   | RATING | SNUM |
|------|--------|--------|--------|------|
| 2003 | LAXIT  | SURAT  |    200 | 1002 |
| 2004 | GOVIND | BOMBAY |    300 | 1002 |
| 2007 | PRATIK | ROME   |    100 | 1004 |
3 rows in set (0.00 sec)
