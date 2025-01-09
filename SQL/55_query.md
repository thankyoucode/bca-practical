55. Create a view show_name that shows for each order the order no, amount, salesman name and the castomer name.

```SQL
CREATE VIEW show_name AS
    SELECT onum, amount, cname, sname
    FROM `order` o, `customer` c, `salesman` s
    WHERE o.cnum = c.cnum AND o.snum = s.snum;
```
output view:
Query OK, 0 rows affected (0.06 sec)
