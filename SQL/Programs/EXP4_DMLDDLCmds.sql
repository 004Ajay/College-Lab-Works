-- EXPERIMENT 4 - UNNAMED

-- ---------------------------------------------------------------------------------------------------- --

-- Create a new table department with fields deptid, dname and make deptid as the primary key

CREATE TABLE department(deptid INT NOT NULL, dname VARCHAR(50), primary key(deptid));

-- ---------------------------------------------------------------------------------------------------- --

-- Insert values to the department table. Make sure tha all the
-- existing values for deptid in employee is inserted into this table.
-- Sample values are design(1), codding(2), testing(3), research(4).

INSERT INTO DEPARTMENT VALUES(1,'Design');
INSERT INTO DEPARTMENT VALUES(2,'Coding');
INSERT INTO DEPARTMENT VALUES(3,'Testing');
INSERT INTO DEPARTMENT VALUES(4,'Research');

-- ---------------------------------------------------------------------------------------------------- --

-- Make deptid in employee table as foreign key that refer to department table

ALTER TABLE EMPLOYEE
ADD FOREIGN KEY (DEPT_ID) REFERENCES DEPARTMENT(DEPTID);

-- ---------------------------------------------------------------------------------------------------- --

-- Display the employee name and department name.

SELECT EMPLOYEE.NAME, DEPARTMENT.DNAME
FROM EMPLOYEE
INNER JOIN DEPARTMENT ON EMPLOYEE.DEPT_ID=DEPARTMENT.DEPTID;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the department name of employee 'Ram'

SELECT EMPLOYEE.NAME,DEPARTMENT.DNAME
FROM EMPLOYEE
INNER JOIN DEPARTMENT ON EMPLOYEE.DEPT_ID=DEPARTMENT.DEPTID
WHERE EMPLOYEE.NAME = 'Ram';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the names of employees getting salary greater than the average salary of their department.

SELECT e.name, e.basic
FROM employee e
WHERE basic > (SELECT avg(basic) FROM employee WHERE e.dept_id = dept_id )
ORDER BY dept_id;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the names of the employees working under the manager RAM

select name from employee where manager_id = 101;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the deptid and total no.of employees as ‘NO_OF _DEPARTMENT_EMPLOYEES’ for only
-- those department with more than 3 employees.

SELECT DEPT_ID AS DEPARTMENT, COUNT(ID) AS NO_OF_EMPLOYEE
FROM EMPLOYEE
GROUP BY DEPT_ID
HAVING COUNT(ID)>3;

-- ---------------------------------------------------------------------------------------------------- --

-- Display deptid and minimum salary as lowest salary for those department with minimum salary above 2500.

SELECT DEPT_ID, MIN(BASIC) AS LOWEST_SALARY
FROM EMPLOYEE
GROUP BY DEPT_ID
HAVING MIN(BASIC) > 2500;


-- ---------------------------------------------------------------------------------------------------- --

-- Display the names of employees whose salary is the maximum given by their department.

SELECT name, basic
FROM employee
WHERE basic IN (SELECT max(basic) FROM employee GROUP BY dept_id);

-- ---------------------------------------------------------------------------------------------------- --


    -- |------------| --
    -- |  SET - 2   | --
    -- |------------| --


-- ---------------------------------------------------------------------------------------------------- --


-- Display the salary given by the design department.

select sum(basic) from employee where dept_id = (select deptid from department where dname = 'Design');

-- ---------------------------------------------------------------------------------------------------- --


-- Display the details of typist working in design department.

select name, dname, desig, basic, dept_id
from employee e join department d on e.DEPT_ID = d.DEPTID where d.dname = 'Design' and e.desig = 'Typist';

-- ---------------------------------------------------------------------------------------------------- --


-- Display the salaries of employees working in research department.

select name, basic from employee where dept_id = (select deptid from department where dname = 'Research');

-- ---------------------------------------------------------------------------------------------------- --


-- List the female employees working in testing department.

select  name, dname, sex from employee  e join department  d on e.DEPT_ID = d.DEPTID where d.dname='Testing';

-- ---------------------------------------------------------------------------------------------------- --


-- Add a column CITY for employee table.

alter table employee add city varchar(20);

-- ---------------------------------------------------------------------------------------------------- --


-- Insert the following values into city of employees.
/*
ID  CITY
101 CALICUT.
102 CHENNAI.
121 DELHI.
156 CHENNAI.
123 BANGLURE.
114 MALAPPURAM.
115 BANGLURE.
127 DELHI.
*/

UPDATE EMPLOYEE SET CITY = 'DELHI' WHERE ID = 127;
UPDATE EMPLOYEE SET CITY = 'CALICUT'  WHERE ID = 101;
UPDATE EMPLOYEE SET CITY =  'CHENNAI' WHERE ID = 102;
UPDATE EMPLOYEE SET CITY = 'DELHI' WHERE ID = 121;
UPDATE EMPLOYEE SET CITY =  'CHENNAI' WHERE ID = 156;
UPDATE EMPLOYEE SET CITY =  'BANGALORE' WHERE ID = 123;
UPDATE EMPLOYEE SET CITY = 'MALAPPURAM' WHERE ID = 114;
UPDATE EMPLOYEE SET CITY = 'BANGALORE' WHERE ID = 115;


-- ---------------------------------------------------------------------------------------------------- --


-- Add a column city for department table.

alter table department add city varchar(20);

-- ---------------------------------------------------------------------------------------------------- --


-- Insert the following values into city in department table.
/*
Deptid  City
1       Calicut
2       Delhi
3       Chennai
4       Banglore
*/

UPDATE DEPARTMENT SET CITY = 'CALICUT'  WHERE DEPTID = 1;
UPDATE DEPARTMENT SET CITY = 'DELHI' WHERE DEPTID = 2;
UPDATE DEPARTMENT SET CITY =  'CHENNAI' WHERE DEPTID = 3;
UPDATE DEPARTMENT SET CITY =  'BANGALORE' WHERE DEPTID = 4;

-- ---------------------------------------------------------------------------------------------------- --

-- Select id, name, city from employee.

select id, name, city from employee;

-- ---------------------------------------------------------------------------------------------------- --


-- Select deptid, dname, city from department.

select deptid, dname, city from department;

-- ---------------------------------------------------------------------------------------------------- --


-- Find the names of employees who are from the same city as their company.

select  name from employee e, department  d where e.city = d.city and e.dept_id = d.deptid;

-- or

select name from (employee natural join department) where city = city and dept_id = deptid;