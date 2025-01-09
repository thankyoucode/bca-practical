41. Create another table Londonstaff having same structure as salesman table.

```SQL
CREATE TABLE londonstaff AS 
    SELECT * FROM salesman
    WHERE 1=2;
```
table view:
Query OK, 0 rows affected (0.31 sec)
Records: 0  Duplicates: 0  Warnings: 0
