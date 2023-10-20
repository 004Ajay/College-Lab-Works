-- Add a column manager_id into the table employee.

ALTER TABLE EMPLOYEE
ADD MANAGER_ID INTEGER;

-- ---------------------------------------------------------------------------------------------------- --

-- Add a column date of joining to the table.

ALTER TABLE EMPLOYEE
ADD JOIN_DATE DATE;