22. Show the name of all customers with their salesman's name.

```SQL
SELECT cname, sname
FROM `customer` c, `salesman` s
WHERE c.snum = s.snum;
```
table view:
| cname   | sname  |
|---------|--------|
| CHANDU  | PIYUSH |
| HARDIK  | PIYUSH |
| GOVIND  | NIRAJ  |
| LAXIT   | NIRAJ  |
| GITA    | MITI   |
| PRATIK  | RAJESH |
| CHAMPAK | LAXMAN |
7 rows in set (0.62 sec)
