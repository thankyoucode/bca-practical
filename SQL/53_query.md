53. Create a view that shows all the numbers of salesman in each city

```SQL
CREATE VIEW salesman_in_city AS
    SELECT city, count(snum)
    FROM salesman
    GROUP BY city;
```
output view:
Query OK, 0 rows affected (0.13 sec)
