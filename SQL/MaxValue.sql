-- Display the max salary given for female employees.

SELECT MAX(BASIC) AS MAX_FEMALE FROM EMPLOYEE
WHERE SEX='F';

-- ---------------------------------------------------------------------------------------------------- --

-- Display the min salary given for male employees.

SELECT MIN(BASIC) AS MAX_MALE FROM EMPLOYEE
WHERE SEX='M';