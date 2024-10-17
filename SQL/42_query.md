42. Insert alll the rows of salesmen table with city London in the Londonstaff table.

```SQL
INSERT INTO londonstaff 
    SELECT * FROM salesman
    WHERE city = "LONDON";
```
table view:
Query OK, 2 rows affected (0.10 sec)
Records: 2  Duplicates: 0  Warnings: 0
```SQL
SELECT * FROM londonstaff;
```
| SNUM | SNAME  | CITY   | COMMISSION( % ) |
|------|--------|--------|-----------------|
| 1001 | PIYUSH | LONDON |              12 |
| 1003 | MITI   | LONDON |              11 |
2 rows in set (0.00 sec)
