17. Find out each customer's smallest order.
```SQL
SELECT cnum, MIN(amount)'min_amount'
FROM `order`
GROUP BY cnum;
```
table view:
| cnum | min_amount |
|------|------------|
