37. Select all customers whose rating doesn't match with any customer of "Surat"

```SQL
SELECT *
FROM `customer`
WHERE rating NOT IN (
    SELECT rating
    FROM `customer`
    WHERE city = "SURAT"
);
```
table view:
| CNUM | CNAME  | CITY   | RATING | SNUM |
|------|--------|--------|--------|------|
| 2001 | HARDIK | LONDON |    100 | 1001 |
| 2005 | CHANDU | LONDON |    100 | 1001 |
| 2007 | PRATIK | ROME   |    100 | 1004 |
3 rows in set (0.00 sec)
