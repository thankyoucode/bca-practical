52. Create a view that shows all the customers who have the highest ratings.

```SQL
CREATE VIEW top_customers AS
    SELECT * FROM customer
    WHERE rating = (
        SELECT max(rating) FROM customer
    );
```
output view:
Query OK, 0 rows affected (0.10 sec)
