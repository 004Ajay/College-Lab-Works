-- Create a table with the following columns.
-- Employee(ID ,DEPTID,NAME,DESIG,BASIC,SEX) -> ID is PRIMARY KEY

CREATE TABLE EMPLOYEE(id INT NOT NULL, dept_id INT, name varchar(20), desig varchar(20), basic INT, sex varchar(6), PRIMARY KEY(id));