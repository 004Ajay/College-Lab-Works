-- Find the no.of department existing in the organization.

SELECT COUNT(DISTINCT DEPT_ID) AS NO_OF_DEPARTMENTS FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the different designations existing in the organization.

SELECT COUNT(DISTINCT DESIG) FROM EMPLOYEE;

-- ---------------------------------------------------------------------------------------------------- --

-- Display the no.of designations existing in the organization.

SELECT COUNT(DISTINCT DESIG) AS NO_OF_DESIGNATIONS FROM EMPLOYEE;