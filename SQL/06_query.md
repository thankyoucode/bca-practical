6. List out names and cities of all salesman in London with commission above 10%.
```SQL
SELECT sname, city
FROM salesman
WHERE city = "london" AND `commission( % )` > 10;
```
table view:
| sname  | city   |
|--------|--------|
| PIYUSH | LONDON |
| MITI   | LONDON |
