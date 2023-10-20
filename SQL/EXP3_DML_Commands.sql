-- EXPERIMENT 3 - FAMILIARIZATION OF DML COMMANDS

-- ---------------------------------------------------------------------------------------------------- --

-- Display ID, NAME, DESIG, DEPTID, and, BASIC, DA, HRA, and NET_SAL
-- respectively [DA is 7.5% of basic, HRA is 9% of basic and NET_SAL = basic + DA + HRA].

SELECT ID, NAME, DESIG, DEPTID, BASIC,
(7.5 / 100) * BASIC AS DA,
(9 / 100) * BASIC AS HRA,
((7.5 / 100) * BASIC + (9 / 100) * BASIC + BASIC)
AS NET_SAL from EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display id, name, desig, dept_id and basic salary in descending order of basic desc

SELECT ID, NAME, DESIG, DEPTID, BASIC FROM EMPLOYEE
ORDER BY BASIC DESC;

-- ---------------------------------------------------------------------------------------------------- --

-- Display all designations without duplicate values

SELECT DISTINCT DESIG FROM AS DIFFERENT_DESIGNATIONS FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display id, name, department and basic of all the employees
-- who are either in manager or clerk and the basic salary is in the range of 1400 and 4500.

SELECT DISTINCT DESIG FROM EMPLOYEE;
SELECT ID, NAME, DEPTID, BASIC FROM EMPLOYEE
WHERE (DESIG = 'Manager' OR DESIG = 'Clerk') AND BASIC BETWEEN 1400 AND 4500;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the manager_id of the employee 'Ram'

SELECT DESIG, MAX(BASIC) FROM EMPLOYEE GROUP BY DESIG;
SELECT MANAGER_ID, NAME FROM EMPLOYEE
WHERE NAME = 'RAM';

-- ---------------------------------------------------------------------------------------------------- --

-- Find the avg salary for each department.

SELECT  DEPTID AS DEPARTMENT, AVG(BASIC) AS AVERAGE_SALARY FROM EMPLOYEE GROUP BY DEPTID;

-- ---------------------------------------------------------------------------------------------------- --

-- Find the maximum salary given to the employees.

SELECT MAX(BASIC) AS MAXIMUM_SALARY FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Find the maximum salary given to the employees.

SELECT DEPTID AS DEPARTMENT, COUNT(ID) AS NO_OF_EMPLOYEE FROM EMPLOYEE
GROUP BY DEPTID;