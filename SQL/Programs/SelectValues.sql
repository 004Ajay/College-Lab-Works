-- Show all tables by current user
   -- no need to change 'table_name' or 'user_tables', just copy & paste

SELECT table_name FROM user_tables;

-- ---------------------------------------------------------------------------------------------------- --

-- Display all records from the table

SELECT * FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display specific things
-- Display the ID,NAME,DESIG,BASIC of all employees

SELECT ID, NAME, DESIG, BASIC FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display Id and name of all the employees from dept no=2.

SELECT ID,NAME FROM EMPLOYEE
WHERE DEPT_ID=2;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the employees whose design is typist.

SELECT NAME FROM EMPLOYEE
WHERE DESIG='Typist';

-- ---------------------------------------------------------------------------------------------------- --

-- Display all details of employees whose design is either analyst or manager

SELECT * FROM EMPLOYEE
WHERE DESIG = 'Analyst' OR DESIG = 'Manager';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of male staffs.

SELECT * FROM EMPLOYEE
WHERE SEX='M';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of female typist.

SELECT * FROM EMPLOYEE
WHERE SEX='F' AND DESIG='Typist';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the male clerks getting salary less than 3000.

SELECT * FROM EMPLOYEE
WHERE DESIG='Clerk' AND BASIC<3000;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of managers or analyst working for department id=2.

SELECT * FROM EMPLOYEE
WHERE (DESIG='Manager' OR DESIG='Analyst') AND DEPTID=2;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the designation salary of Ruby.

SELECT DESIG,BASIC FROM EMPLOYEE
WHERE NAME='Ruby';