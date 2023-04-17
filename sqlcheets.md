# Structured Query Language


SQL (Structured Query Language) is a domain-specific language used in programming and designed for managing data held in a Relational Database Management System (RDBMS).

SQL is used to manipulate and query data stored in a relational database. It allows users to create, modify, and delete database objects such as tables, views, indexes, and constraints.

SQL is a standard language for interacting with relational databases, and it is supported by most popular database systems, including MySQL, Oracle, Microsoft SQL Server, PostgreSQL, and SQLite.

### Basic SQL Commands
Here are some basic SQL commands that are commonly used in database management:

### SELECT
The SELECT statement is used to retrieve data from a database. The basic syntax of a SELECT statement is:

sql
```
SELECT column1, column2, ...
FROM table_name;
```
### INSERT
The INSERT statement is used to insert data into a table. The basic syntax of an INSERT statement is:

sql
```
INSERT INTO table_name (column1, column2, ...)
VALUES (value1, value2, ...);
```
### UPDATE

The UPDATE statement is used to modify existing data in a table. The basic syntax of an UPDATE statement is:

sql
``` UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;
```
### DELETE 

The DELETE statement is used to delete data from a table. The basic syntax of a DELETE statement is:

sql
```
DELETE FROM table_name
WHERE condition;
```
Advanced SQL Commands
Here are some advanced SQL commands that are used in database management:

#### JOIN
The JOIN clause is used to combine rows from two or more tables, based on a related column between them. There are different types of JOINs, including INNER JOIN, LEFT JOIN, RIGHT JOIN, and FULL OUTER JOIN.

#### GROUP BY
The GROUP BY clause is used to group rows that have the same values in one or more columns. It is often used with aggregate functions, such as COUNT, SUM, AVG, MIN, and MAX.

#### HAVING
The HAVING clause is used to filter the results of a GROUP BY query based on a specified condition.

#### ORDER BY
The ORDER BY clause is used to sort the results of a query in ascending or descending order based on one or more columns.

#### DISTINCT
The DISTINCT keyword is used to retrieve unique values from a column.

#### Conclusion
SQL is a powerful language for managing data in a relational database. It allows users to manipulate and query data stored in a database using a simple and intuitive syntax. By mastering the basic and advanced SQL commands, users can efficiently manage and analyze data stored in a database