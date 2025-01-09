23. List all orders with the names of there customer and salesman.

```SQL
SELECT onum, cname, sname
FROM `order` o, `customer` c, `salesman` s
WHERE o.cnum = c.cnum and o.snum = s.snum;
```
table view:
| onum | cname   | sname  |
|------|---------|--------|
| 3001 | CHAMPAK | LAXMAN |
| 3002 | HARDIK  | PIYUSH |
| 3003 | PRATIK  | RAJESH |
| 3004 | LAXIT   | NIRAJ  |
| 3005 | CHAMPAK | LAXMAN |
| 3006 | GITA    | MITI   |
| 3007 | GOVIND  | NIRAJ  |
| 3008 | CHANDU  | PIYUSH |
| 3009 | GOVIND  | NIRAJ  |
| 3010 | HARDIK  | PIYUSH |
10 rows in set (0.00 sec)
