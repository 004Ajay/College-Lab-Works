-- Experiment no:6

-- Aim: Creation of Cursors


-- ---------------------------------------------------------------------------------------------------- --

SET SERVEROUTPUT ON;

-- Create an explicit cursor to increase the BASIC of employee of department
-- no:1. Also the details-id,name,oldBASIC,new BASIC and date of modification
-- should be inserted into a new table inc_sal. 

CREATE TABLE INCSAL(ID NUMBER PRIMARY KEY,NAME VARCHAR2(15),OLD_SAL NUMBER,NEW_SAL NUMBER);

-- Table created.

DECLARE
CURSOR ECUR IS SELECT ID,NAME,BASIC FROM Employee WHERE Dept_ID=1;
NID Employee.ID%TYPE;
NNAME Employee.NAME%TYPE;
NSAL Employee.BASIC%TYPE;
BEGIN
OPEN ECUR;
LOOP
FETCH ECUR INTO NID,NNAME,NSAL;
EXIT WHEN(ECUR%NOTFOUND);
UPDATE Employee SET BASIC=BASIC+1000 WHERE ID=NID;
INSERT INTO INCSAL VALUES(NID,NNAME,NSAL,NSAL+1000);
END LOOP;
CLOSE ECUR;
END;
/

-- OUTPUT: PL/SQL procedure successfully completed.

SELECT * FROM INCSAL;

-- OUTPUT:

--         ID NAME               OLD_SAL    NEW_SAL
-- ---------- --------------- ---------- ----------
--        101 Ram                   2000       3000
--        121 Ruby                  2010       3010


-- ---------------------------------------------------------------------------------------------------- --


-- Repeat exercise1 by reading department no inter relatively from the user.

CREATE TABLE INCSAL2(ID NUMBER PRIMARY KEY,NAME VARCHAR2(15),OLD_SAL NUMBER,NEW_SAL NUMBER);

-- OUTPUT: Table created.

DECLARE
CURSOR ECUR(V_DNO Employee.ID%TYPE) IS SELECT ID,NAME,BASIC FROM Employee WHERE Dept_ID=V_DNO;
NID Employee.ID%TYPE;
NNAME Employee.NAME%TYPE;
NSAL Employee.BASIC%TYPE;
BEGIN
OPEN ECUR(&DeptID);
LOOP
FETCH ECUR INTO NID,NNAME,NSAL;
EXIT WHEN(ECUR%NOTFOUND);
UPDATE Employee SET BASIC=BASIC+1000 WHERE ID=NID;
INSERT INTO INCSAL2 VALUES(NID,NNAME,NSAL,NSAL+1000);
END LOOP;
CLOSE ECUR;
END;
/

-- OUTPUT: PL/SQL procedure successfully completed.

SELECT * FROM INCSAL2;

-- OUTPUT:

--         ID NAME               OLD_SAL    NEW_SAL
-- ---------- --------------- ---------- ----------
--        101 Ram                   3000       4000
--        121 Ruby                  3010       4010


-- ---------------------------------------------------------------------------------------------------- --

-- Repeat exercise 1 by using cursor for loops

CREATE TABLE INCSAL1(ID NUMBER PRIMARY KEY,NAME VARCHAR2(15),OLD_SAL NUMBER,NEW_SAL NUMBER);

-- Table Created

DECLARE
CURSOR C IS SELECT ID,NAME,BASIC FROM EMPLOYEE WHERE Dept_ID=1;
BEGIN
FOR EMP_REC IN C
LOOP
UPDATE EMPLOYEE SET BASIC=EMP_REC.BASIC+1000 WHERE ID=EMP_REC.ID;
INSERT INTO INCSAL1 VALUES(EMP_REC.ID,EMP_REC.NAME,EMP_REC.BASIC,EMP_REC.BASIC+1000);
END LOOP;
END;
/

-- OUTPUT: PL/SQL procedure successfully completed.

SQL> SELECT * FROM INCSAL1;

-- OUTPUT:

--    ID NAME               OLD_SAL    NEW_SAL
-- ----- --------------- ---------- ----------
--   121 Ruby                  4010       5010
--   101 Ram                   4000       5000


-- ---------------------------------------------------------------------------------------------------- --


-- Repeat exercise1 by using parameterized cursors. The department no. should be passed as a parameter.


CREATE TABLE INCSAL3(ID NUMBER PRIMARY KEY,NAME VARCHAR2(15),OLD_SAL NUMBER,NEW_SAL NUMBER);

-- Table created.

DECLARE
CURSOR C (V_DNO Employee.Dept_ID%TYPE)IS SELECT ID,NAME,BASIC FROM Employee WHERE Dept_ID=V_DNO;
BEGIN
FOR EMP_REC IN C(1)
LOOP
UPDATE Employee SET BASIC=EMP_REC.BASIC+1000 WHERE ID=EMP_REC.ID;
INSERT INTO INCSAL3 VALUES(EMP_REC.ID,EMP_REC.NAME,EMP_REC.BASIC,EMP_REC.BASIC +1000);
END LOOP;
END;
/

-- OUTPUT: PL/SQL procedure successfully completed.

SELECT * FROM INCSAL3;

-- OUTPUT:

--         ID NAME               OLD_SAL    NEW_SAL
-- ---------- --------------- ---------- ----------
--        121 Ruby                  5010       6010
--        101 Ram                   5000       6000


-- ---------------------------------------------------------------------------------------------------- --


-- Create a cursor to display the highest five salaries of the employee table

DECLARE
CURSOR C IS SELECT BASIC FROM EMPLOYEE ORDER BY BASIC DESC;
S NUMBER;
BEGIN
OPEN C;
LOOP
FETCH C INTO S;
DBMS_OUTPUT.PUT_LINE(S);
EXIT WHEN(C%ROWCOUNT=5);
END LOOP;
CLOSE C;
END;
/

-- OUTPUT:
-- 
-- 6010
-- 6000
-- 6000
-- 6000
-- 4500

-- PL/SQL procedure successfully completed.


-- ---------------------------------------------------------------------------------------------------- --

-- Use a SQL cursor attribute to display the message ‘NO SUCH
-- DEPARTMENT IDs’ when a user is trying to update the BASIC of employees
-- for a department which does not exists.

DECLARE
CURSOR C(D_NUM EMPLOYEE.Dept_ID%TYPE) IS SELECT Dept_ID FROM EMPLOYEE GROUP BY Dept_ID HAVING  Dept_ID=D_NUM;
V_DNO EMPLOYEE.Dept_ID%TYPE;
BEGIN
OPEN C(&Dept_ID);
LOOP
FETCH C INTO V_DNO;
IF(C%FOUND) THEN
UPDATE EMPLOYEE SET BASIC=BASIC+1000 WHERE Dept_ID=V_DNO;
EXIT;
ELSE
DBMS_OUTPUT.PUT_LINE('NO SUCH DEPARTMENT EXISTS');
EXIT;
END IF;
END LOOP;
CLOSE C;
END;
/

-- OUTPUT:

-- Enter value for dept_id: 106
-- old   5: OPEN C(&Dept_ID);
-- new   5: OPEN C(106);
-- NO SUCH DEPARTMENT EXISTS

-- PL/SQL procedure successfully completed.