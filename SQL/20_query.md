20. Assume each salesperson has a 12% commission. Write a query on the order table that will produce the order number, salesman no. and amount of commission for that order.

```SQL
SELECT onum, snum, (amount*12)/100 "commission_amount"
FROM `order`;
```
table view:
| onum | snum | commission_amount |
|------|------|-------------------|
| 3001 | 1007 | 2.242800064086914 |
| 3002 | 1001 | 92.06280029296875 |
| 3003 | 1004 | 228.0119970703125 |
| 3004 | 1002 |    619.2540234375 |
| 3005 | 1007 |            131.79 |
| 3006 | 1003 | 205.5743994140625 |
| 3007 | 1002 |              9.09 |
| 3008 | 1001 |            566.76 |
| 3009 | 1002 |  157.193994140625 |
| 3010 | 1001 |   1187.8644140625 |
10 rows in set (0.10 sec)
