46. Double the commission of all salesman of london.

```SQL
UPDATE `salesman`
SET `commission( % )` = `commission( % )` * 2
WHERE city = "LONDON";
```
output view:
Query OK, 2 rows affected (0.08 sec)
Rows matched: 2  Changed: 2  Warnings: 0
