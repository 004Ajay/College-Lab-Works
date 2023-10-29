-- EXPERIMENT 2 - FAMILIARIZATION OF DDL COMMANDS

-- ---------------------------------------------------------------------------------------------------- --

-- Create a table with the following columns.
-- Employee(ID, DEPTID, NAME, DESIG, BASIC, SEX) -> ID is PRIMARY KEY

CREATE TABLE EMPLOYEE(id INT NOT NULL, dept_id INT, name varchar(20), desig varchar(20), basic INT, sex varchar(6), PRIMARY KEY(id));

-- ---------------------------------------------------------------------------------------------------- --

-- Describe table structure.

DESC EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Insert values into table Employee

INSERT INTO EMPLOYEE VALUES(101,1,'Ram','Typist',2000,'M');
INSERT INTO EMPLOYEE VALUES(102,2,'Arun','Analyst',6000,'M');
INSERT INTO EMPLOYEE VALUES(121,1,'Ruby','Typist',2010,'F');
INSERT INTO EMPLOYEE VALUES(156,3,'Mary','Manager',4500,'F');
INSERT INTO EMPLOYEE VALUES(123,2,'Mrudula','Analyst',6000,'F');
INSERT INTO EMPLOYEE VALUES(114,4,'Menon','Clerk',1500,'M');
INSERT INTO EMPLOYEE VALUES(115,4,'Tin','Clerk',1500,'M');
INSERT INTO EMPLOYEE VALUES(127,2,'Kiran','Manager',4000,'M');

-- ---------------------------------------------------------------------------------------------------- --

-- Display all records from the table

SELECT * FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the ID, NAME, DESIG, BASIC of all employees

SELECT ID, NAME, DESIG, BASIC FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display Id and name of all the employees from dept no = 2.

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

-- Add a column manager_id into the table employee.

ALTER TABLE EMPLOYEE
ADD MANAGER_ID INTEGER;

-- ---------------------------------------------------------------------------------------------------- --

-- Update the values of manager_id of employee as null for 101, 101 for
-- 102, 121, 156, 102 for 123, 114, 115, 121 for 127.

UPDATE EMPLOYEE
SET MANAGER_ID = NULL
WHERE ID = 101;

UPDATE EMPLOYEE
SET MANAGER_ID = 101
WHERE ID = 102 OR ID = 121 OR ID = 156;

UPDATE EMPLOYEE
SET MANAGER_ID = 102
WHERE ID = 123 OR ID = 114 OR ID = 115;

UPDATE EMPLOYEE
SET MANAGER_ID = 121
WHERE ID = 127;

-- ---------------------------------------------------------------------------------------------------- --

-- Display all records from employee table

SELECT * FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --


    -- |------------| --
    -- |  SET - 2   | --
    -- |------------| --

-- ---------------------------------------------------------------------------------------------------- --

-- Find the no.of department existing in the organization.

SELECT COUNT(DISTINCT DEPT_ID) AS NO_OF_DEPARTMENTS FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the different designations existing in the organization.

SELECT COUNT(DISTINCT DESIG) FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the no.of designations existing in the organization.

SELECT COUNT(DISTINCT DESIG) AS NO_OF_DESIGNATIONS FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the max salary given for female employees.

SELECT MAX(BASIC) AS MAX_FEMALE FROM EMPLOYEE
WHERE SEX='F';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of managers or analyst working for department id = 2.

SELECT * FROM EMPLOYEE
WHERE (DESIG='Manager' OR DESIG='Analyst') AND DEPTID = 2;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the designation salary of Ruby.

SELECT DESIG,BASIC FROM EMPLOYEE
WHERE NAME = 'Ruby';

-- ---------------------------------------------------------------------------------------------------- --

-- Add a column date of joining to the table.

ALTER TABLE EMPLOYEE
ADD JOIN_DATE DATE;

-- ---------------------------------------------------------------------------------------------------- --

-- Update appropriate values for joining date.

UPDATE EMPLOYEE
SET JOIN_DATE = '28-MAR-2002'
WHERE ID = 101;

UPDATE EMPLOYEE
SET JOIN_DATE = '28-JAN-2001'
WHERE ID = 102;

UPDATE EMPLOYEE
SET JOIN_DATE = '18-JUL-1998'
WHERE ID = 114;

UPDATE EMPLOYEE
SET JOIN_DATE = '11-JAN-1996'
WHERE ID = 115;

UPDATE EMPLOYEE
SET JOIN_DATE = '20-DEC-2010'
WHERE ID = 121;

UPDATE EMPLOYEE
SET JOIN_DATE = '16-APR-2011'
WHERE ID = 123;

UPDATE EMPLOYEE
SET JOIN_DATE = '13-SEP-1998'
WHERE ID = 127;

UPDATE EMPLOYEE
SET JOIN_DATE = '27-JUL-2015'
WHERE ID = 156;

-- ---------------------------------------------------------------------------------------------------- --

-- Display all records from employee table

SELECT * FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of employees according to their seniority

SELECT * FROM EMPLOYEE
ORDER BY JOIN_DATE ASC;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the details of employees according to the descending order of their salary

SELECT * FROM EMPLOYEE
ORDER BY BASIC DESC;