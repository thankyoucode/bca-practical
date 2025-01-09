44. Remove all orders of customer "Chandu".

```SQL
SELECT * FROM `order`
WHERE cnum = (
    SELECT cnum FROM customer
    WHERE cname = "CHANDU"
);
```
table view:
| ONUM | AMOUNT | ODATE      | CNUM | SNUM |
|------|--------|------------|------|------|
| 3008 |   4723 | 1999-05-10 | 2005 | 1001 |
1 row in set (0.00 sec)
```SQL
DELETE FROM `order`
WHERE cnum = (
    SELECT cnum FROM customer
    WHERE cname = "CHANDU"
);
```
table view:
Query OK, 1 row affected (0.12 sec)
