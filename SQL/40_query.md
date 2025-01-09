40. Insert a row into customer table with values London, Pratik a 2008 for the columns city, name and number

```SQL
INSERT INTO `customer`(city, cname, cnum) VALUES("LONDON", "PRATIK", 2008);
```
table view:
Query OK, 1 row affected (0.12 sec)
```SQL
SELECT * FROM customer;
```
table view:
| CNUM | CNAME   | CITY   | RATING | SNUM |
|------|---------|--------|--------|------|
| 2001 | HARDIK  | LONDON |    100 | 1001 |
| 2002 | GITA    | ROME   |    200 | 1003 |
| 2003 | LAXIT   | SURAT  |    200 | 1002 |
| 2004 | GOVIND  | BOMBAY |    300 | 1002 |         NOT WRITE THIS !!!
| 2005 | CHANDU  | LONDON |    100 | 1001 |
| 2006 | CHAMPAK | SURAT  |    300 | 1007 |
| 2007 | PRATIK  | ROME   |    100 | 1004 |
| 2008 | PRATIK  | LONDON |   NULL | NULL |
8 rows in set (0.00 sec)
