39. Insert a row into salesmen table with the values snum is 1008 salesman name is Rakesh, city is unknown and commission is 14%.

```SQL
INSERT INTO `salesman` VALUES(1008, "RAKESH", NULL, 14);
```
table view:
Query OK, 1 row affected (0.08 sec)
```SQL
SELECT * FROM salesman;
```
table view:
| SNUM | SNAME  | CITY      | COMMISSION( % ) |
|------|--------|-----------|-----------------|
| 1001 | PIYUSH | LONDON    |              12 |
| 1002 | NIRAJ  | SURAT     |              13 |
| 1003 | MITI   | LONDON    |              11 |
| 1004 | RAJESH | BARODA    |              15 |         NOT WRITE THIS !!!
| 1005 | ANAND  | NEW DELHI |              10 |
| 1006 | RAM    | PATAN     |              10 |
| 1007 | LAXMAN | BOMBAY    |               9 |
| 1008 | RAKESH | NULL      |              14 |
8 rows in set (0.00 sec)
