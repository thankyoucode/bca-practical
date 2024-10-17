19. Display the no. of order for each day in the following format. There are "X"(no. of orders) orders no. "Y"(date in dd-mon-yy).
```SQL
SELECT count(odate)"X", odate"Y"
FROM `order`
GROUP BY odate;
```
table view:
| X | Y          |
|---|------------|
| 4 | 1999-03-10 |
| 2 | 1999-04-10 |
| 3 | 1999-05-10 |
| 1 | 1999-06-10 |
4 rows in set (0.00 sec)
