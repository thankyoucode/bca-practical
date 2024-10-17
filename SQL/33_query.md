33. Count the no. of customers with the rating above than the average rating of "SURAT".

```SQL
SELECT count(cnum)'c_count'
FROM `customer`
WHERE rating > (
    SELECT avg(rating)
    FROM `customer`
    WHERE city = "SURAT"
);
```
table view:
| c_count |
|---------|
|       2 |
1 row in set (0.00 sec)
