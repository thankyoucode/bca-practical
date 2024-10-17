28. List all salesman who are living in the same city without duplicate rows.

```SQL
SELECT s1.sname's1_sname', s2.sname's2_sname', s1.city
FROM `salesman` s1, `salesman` s2
WHERE s1.city = s2.city AND s1.sname < s2.sname;
```
table view:
| s1_sname | s2_sname | city   |
|----------|----------|--------|
| MITI     | PIYUSH   | LONDON |
1 row in set (0.00 sec)
