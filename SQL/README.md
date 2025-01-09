# SQL

## Creating database that used in this practical

> Here this all queries are base on [000_database_tables.sql](./000_database_tables.sql)

- Database - `shop_management`

  - table 1 - `Salesman`
  - table 2 - `Customer`
  - table 3 - `Order`

## SQL query list

1. [Produce the order no, amount and date of all order.](01_query.md) 
2. [Give all the information about all the customers with salesman number 1001.](02_query.md) 
3. [Display the information in the sequence of city, sname, snum, and commission.](03_query.md) 
4. [List of snum of all salesman with orders in order table without duplicates.](04_query.md) 
5. [List of all orders for more than Rs. 1000.](05_query.md) 
6. [List out names and cities of all salesman in London with commission above 10%.](06_query.md) 
7. [List all customers excluding those with rating <= 100 or they are located in Rome](07_query.md) 
8. [List all order for more than Rs. 1000 except the orders of snum 1006 of 10/03/99.](08_query.md) 
9. [List all orders taken on 10th March(3), April(4) and June(6) 1999.](09_query.md) 
10. [List all customers whose names begin with a latter 'C'.](10_query.md)
11. [List all customers whose names begins with letter 'A' to 'G'](11_query.md)
12. [List all orders with zero or NULL amount.](12_query.md)
13. [Find out the largest orders of salesman 1002 and 1007.](13_query.md)
14. [Calculate the Average and Sum of amount ordered.](14_query.md)
15. [Count the no. of salesman currently having orders.](15_query.md)
16. [Find the largest order taken by each salesman on each date.](16_query.md)
17. [Find out each customer's smallest order.](17_query.md)
18. [Find out the customer in alpabetical order whose name begines with 'G'.](18_query.md)
19. [Display the no. of order for each day in the following format. There are "X"(no. of orders) orders no. "Y"(date in dd-mon-yy).](19_query.md)
20. [Assume each salesperson has a 12% commission. Write a query on the order table that will produce the order number, salesman no. and amount of commission for that order.](20_query.md)
21. [List all customers in descending order of rating](21_query.md)
22. [Show the name of all customers with their salesman's name.](22_query.md)
23. [List all orders with the names of there customer and salesman.](23_query.md)
24. [List all orders by the customers not located in the same city as their salesman.](24_query.md)
25. [List all customers serviced by salesman with commission above 12%.](25_query.md)
26. [Find all pairs of customers having the same rating with out duplication.](26_query.md)
27. [List all customers located in cities where salesman "Niraj" has customers.](27_query.md)
28. [List all salesman who are living in the same city without duplicate rows.](28_query.md)
29. [Produce the name and city of all the customers with the same rating an "Hardik".](29_query.md)
30. [Extract all orders of miti.](30_query.md)
31. [Find all orders of salesman who services "Hardik".](31_query.md)
32. [List all orders that are greater than the average of april 10, 1999.](32_query.md)
33. [Count the no. of customers with the rating above than the average rating of "SURAT".](33_query.md)
34. [Using correlated sub query find the name and number of all customer with rating equal to maximum for their city.](34_query.md)
35. [Find all customers having rating greater than any customer in "Rome".](35_query.md)
36. [Find all the customers who have greater rating than every customer in "Rome".](36_query.md)
37. [Select all customers whose rating doesn't match with any customer of "Surat"](37_query.md)
38. [Create a union of two queries that shows the names, cities and ratings of all customers.](38_query.md)
39. [Insert a row into salesmen table with the values snum is 1008 salesman name is Rakesh, city is unknown and commission is 14%.](39_query.md)
40. [Insert a row into customer table with values London, Pratik a 2008 for the columns city, name and number](40_query.md)
41. [Create another table Londonstaff having same structure as salesman table.](41_query.md)
42. [Insert all the rows of salesmen table with city London in the Londonstaff table.](42_query.md)
43. [Create another table Day totals with two attributes date and total and insert rows into this Table from order table.](43_query.md)
44. [Remove all orders of customer "Chandu".](44_query.md)
45. [Increse the rating of all customers in "Rome" by 100.](45_query.md)
46. [Double the commission of all salesman of london.](46_query.md)
47. [Delete the salesman who produce the lowest order for each day](47_query.md)
48. [Delete all customers with no current orders.](48_query.md)
49. [Write a query to add the item-name coulmn to the order table.](49_query.md)
50. [Give the commands to create our sample tables (salesman, customer, orders) with all the Necessary constranint like PRIMARY KEY, NOT NULL, UNIQUE, FOREING KEY.](50_query.md)
51. [Create a view called Big orders which stores all orders larger than Rs. 8000.](51_query.md)
52. [Create a view that shows all the customers who have the highest ratings.](52_query.md)
53. [Create a view that shows all the numbers of salesman in each city](53_query.md)
54. [Create a view that shows the average and total orders for each salesman after his name and number.](54_query.md)
55. [Create a view show_name that shows for each order the order no, amount, salesman name and the castomer name.](55_query.md)
