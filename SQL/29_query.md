29. Produce the name and city of all the customers with the same rating an "Hardik".

```SQL
SELECT cname, city, rating
FROM `customer`
WHERE rating = (
    SELECT rating 
    FROM `customer` 
    WHERE cname = "HARDIK" );
```
table view:
| cname  | city   | rating |
|--------|--------|--------|
| HARDIK | LONDON |    100 |
| CHANDU | LONDON |    100 |
| PRATIK | ROME   |    100 |
3 rows in set (0.05 sec)
