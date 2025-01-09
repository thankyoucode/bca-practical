54. Create a view that shows the average and total orders for each salesman after his name and number.

```SQL
CREATE VIEW salesman_avg_total AS
    SELECT sum(amount)'total', avg(amount)'avg', s.snum, sname
    FROM salesman s, `order` o
    WHERE  s.snum = o.snum
    GROUP BY snum, sname;
```
output view:
Query OK, 0 rows affected (0.08 sec)
