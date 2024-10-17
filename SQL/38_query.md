38. Create a union of two queries that shows the names, cities and ratings of all customers.
    Those with rating of >= 200 should display "HIGH RATING" and those with < 200 should display "LOW RATING"

```SQL
SELECT cname, city, rating, "HIGH RATING" AS 'rating level'
FROM `customer`
WHERE rating >= 200 UNION
SELECT cname, city, rating, "LOW RATING" AS 'rating level'
FROM `customer`
WHERE rating < 200;
```
table view:
| cname   | city   | rating | rating level |
|---------|--------|--------|--------------|
| GITA    | ROME   |    200 | HIGH RATING  |
| LAXIT   | SURAT  |    200 | HIGH RATING  |
| GOVIND  | BOMBAY |    300 | HIGH RATING  |
| CHAMPAK | SURAT  |    300 | HIGH RATING  |
| HARDIK  | LONDON |    100 | LOW RATING   |
| CHANDU  | LONDON |    100 | LOW RATING   |
| PRATIK  | ROME   |    100 | LOW RATING   |
7 rows in set (0.00 sec)
