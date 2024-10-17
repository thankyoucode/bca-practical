34. Using correlated sub query find the name and number of all customer with rating equal to maximum for their city.

```SQL
SELECT cnum, cname, rating
FROM `customer` c1
WHERE rating = (
    SELECT max(rating)
    FROM `customer` c2
    WHERE c1.city = c2.city
);
```
table view:
| cnum | cname   | rating |
|------|---------|--------|
| 2001 | HARDIK  |    100 |
| 2002 | GITA    |    200 |
| 2004 | GOVIND  |    300 |
| 2005 | CHANDU  |    100 |
| 2006 | CHAMPAK |    300 |
5 rows in set (0.00 sec)
