26. Find all pairs of customers having the same rating with out duplication.

```SQL
SELECT c1.cname'c1_name', c2.cname'c2_name'
FROM `customer` c1, `customer` c2
WHERE c1.rating = c2.rating AND c1.cname < c2.cname;
```
table view:
| c1_name | c2_name |
|---------|---------|
| CHANDU  | HARDIK  |
| GITA    | LAXIT   |
| CHAMPAK | GOVIND  |
| CHANDU  | PRATIK  |
| HARDIK  | PRATIK  |
5 rows in set (0.00 sec)
