-- Experiment 7

-- Aim: Creation of Procedures, Triggers and Functions.

-- PROCEDURE


-- ---------------------------------------------------------------------------------------------------- --

SET SERVEROUTPUT ON;

-- Write a simple procedure to find the minimum of two numbers

DECLARE
A NUMBER;
B NUMBER;
C NUMBER;
PROCEDURE FINDMIN(X IN NUMBER, Y IN NUMBER,Z OUT NUMBER) IS
BEGIN
IF X<Y THEN
Z:=X;
ELSE
Z:=Y;
END IF;
END;
BEGIN
A:=&A;
B:=&B;
FINDMIN(A,B,C);
DBMS_OUTPUT.PUT_LINE('MINIMUM OF A:'||A||'AND B:'||B||'IS:'||C);
END;
/

-- OUTPUT:

-- Enter value for a: 10
-- old  14: A:=&A;
-- new  14: A:=10;
-- Enter value for b: 43
-- old  15: B:=&B;
-- new  15: B:=43;
-- MINIMUM OF A:10 AND B:43 IS:10

-- PL/SQL procedure successfully completed.

-- ---------------------------------------------------------------------------------------------------- --

-- Write a procedure that passes employee id and returns the employee’s full
-- name from the employee table to the calling program.Also write the
-- anonymous block with the procedure call.

CREATE OR REPLACE PROCEDURE SEARCH_EMP(EMP_ID IN NUMBER,EMP_NAME OUT VARCHAR2) IS
BEGIN
SELECT NAME INTO EMP_NAME FROM EMPLOYEE WHERE EMP_ID=ID;
EXCEPTION
WHEN OTHERS THEN
DBMS_OUTPUT.PUT_LINE('EMPLOYEE ID'||EMP_ID||'DOES NOT EXIST');
END;
/

-- OUTPUT: Procedure created.


-- ---------------------------------------------------------------------------------------------------- --


DECLARE
V_NAME EMPLOYEE.NAME%TYPE;
V_ID EMPLOYEE.ID%TYPE:=&EMP_ID;
BEGIN
SEARCH_EMP(V_ID,V_NAME);
IF V_NAME IS NOT NULL THEN
DBMS_OUTPUT.PUT_LINE('EMPLOYEE ID:'||V_ID);
DBMS_OUTPUT.PUT_LINE('NAME:'||V_NAME);
END IF;
END;
/


-- ---------------------------------------------------------------------------------------------------- --


-- OUTPUT:

-- Enter value for emp_id: 101
-- old   3: V_ID EMPLOYEE.ID%TYPE:=&EMP_ID;
-- new   3: V_ID EMPLOYEE.ID%TYPE:=101;
-- EMPLOYEE ID:101
-- NAME:Ram

-- PL/SQL procedure successfully completed.


-- ---------------------------------------------------------------------------------------------------- --
-- XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX --
-- XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX --
-- ---------------------------------------------------------------------------------------------------- --


-- FUNCTIONS


-- Write a function that returns the factorial of a number.

CREATE OR REPLACE FUNCTION FACT(N IN NUMBER)
RETURN NUMBER
IS
F NUMBER;
BEGIN
IF N=0 THEN
F:=1;
ELSE
F:=N*FACT(N-1);
END IF;
RETURN F;
END;
/

-- OUTPUT: Function created.


-- ---------------------------------------------------------------------------------------------------- --


DECLARE
N NUMBER;
S NUMBER;
BEGIN
N:=&N;
S:=FACT(N);
DBMS_OUTPUT.PUT_LINE('FACTORIAL OF '||N||'IS: '||S);
END;
/

-- OUTPUT:

-- Enter value for n: 5
-- old   5: N:=&N;
-- new   5: N:=5;
-- FACTORIAL OF 5IS: 120

-- PL/SQL procedure successfully completed.


-- ---------------------------------------------------------------------------------------------------- --


-- Write a function to return the net BASIC given the employee number.

ALTER TABLE EMPLOYEE ADD COMMISION NUMBER(5);

-- OUTPUT: Table altered.

UPDATE EMPLOYEE SET COMMISION = 100 WHERE DEPT_ID = 1;
UPDATE EMPLOYEE SET COMMISION = 200 WHERE DEPT_ID = 2;
UPDATE EMPLOYEE SET COMMISION = 300 WHERE DEPT_ID = 3;
UPDATE EMPLOYEE SET COMMISION = 150 WHERE DEPT_ID = 4;

-- OUTPUT: 'x' ROWS AFFECTED.


-- ---------------------------------------------------------------------------------------------------- --

SELECT * FROM EMPLOYEE;

-- OUTPUT:
-- 
--   ID DEPT_ID NAME       DESIG     BASIC SEX MANAGER_ID JOIN_DATE CITY         COMMISION
-- ---- ------- ---------- --------- ----- --- ---------- --------- ------------ ---------
--  102       2 Arun       Analyst    6000 M          101 28-JAN-01 CHENNAI            200
--  121       1 Ruby       Typist     6010 F          101 20-DEC-10 DELHI              100
--  156       3 Mary       Manager    4500 F          101 27-JUL-15 CHENNAI            300
--  123       2 Mrudula    Analyst    6000 F          102 16-APR-11 BANGALORE          200
--  114       4 Menon      Clerk      1500 M          102 18-JUL-98 MALAPPURAM         150
--  115       4 Tin        Clerk      1500 M          102 11-JAN-96 BANGALORE          150
--  127       2 Kiran      Manager    4000 M          121 13-SEP-98 DELHI              200
--  101       1 Ram        Typist     6000 M              28-MAR-02 CALICUT            100


-- ---------------------------------------------------------------------------------------------------- --


CREATE OR REPLACE FUNCTION NET_SAL(ENO IN NUMBER)
RETURN NUMBER
IS
COM NUMBER;
SAL NUMBER;
NET NUMBER;
BEGIN
SELECT COMMISION,BASIC INTO COM,SAL FROM EMPLOYEE WHERE ID=ENO;
NET:=COM+SAL;
RETURN NET;
END;
/

-- OUTPUT: Function created.


-- ---------------------------------------------------------------------------------------------------- --


DECLARE
ID NUMBER:=&ID;
TOTAL NUMBER;
BEGIN
TOTAL:=NET_SAL(ID);
DBMS_OUTPUT.PUT_LINE('NET BASIC IS '||TOTAL);
END;
/

-- OUTPUT:

-- Enter value for id: 101
-- old   2: ID NUMBER:=&ID;
-- new   2: ID NUMBER:=101;
-- NET BASIC IS 6100

-- PL/SQL procedure successfully completed.


-- ---------------------------------------------------------------------------------------------------- --


-- Write a PL/SQL block of code that lists the highest BASIC drawn by an
-- employee in each of the departments.It should make use of a function
-- dept_highest which returns the highest BASIC drawn by an employee for the given department.


SELECT * FROM EMPLOYEE;

-- OUTPUT:
-- 
--  ID DEPT_ID NAME     DESIG     BASIC SEX MANAGER_ID JOIN_DATE CITY        COMMISION
-- --- ------- -------- --------- ----- --- ---------- --------- ----------- ---------
-- 102       2 Arun     Analyst    6000 M          101 28-JAN-01 CHENNAI           200
-- 121       1 Ruby     Typist     6010 F          101 20-DEC-10 DELHI             100
-- 156       3 Mary     Manager    4500 F          101 27-JUL-15 CHENNAI           300
-- 123       2 Mrudula  Analyst    6000 F          102 16-APR-11 BANGALORE         200
-- 114       4 Menon    Clerk      1500 M          102 18-JUL-98 MALAPPURAM        150
-- 115       4 Tin      Clerk      1500 M          102 11-JAN-96 BANGALORE         150
-- 127       2 Kiran    Manager    4000 M          121 13-SEP-98 DELHI             200
-- 101       1 Ram      Typist     6000 M              28-MAR-02 CALICUT           100


-- ---------------------------------------------------------------------------------------------------- --


CREATE OR REPLACE FUNCTION DEPTHIGHEST(DNUM IN NUMBER)
RETURN NUMBER
IS
SAL EMPLOYEE.BASIC%TYPE;
BEGIN
SELECT MAX(BASIC)INTO SAL FROM EMPLOYEE GROUP BY DEPT_ID HAVING EMPLOYEE.DEPT_ID=DNUM;
RETURN SAL;
END;
/


-- OUTPUT: Function created.

-- ---------------------------------------------------------------------------------------------------- --

DECLARE
DNUM NUMBER:=&DNUM;
HIGH NUMBER;
BEGIN
HIGH:=DEPTHIGHEST(DNUM);
DBMS_OUTPUT.PUT_LINE('HIGHEST BASIC FROM DEPARTMENT'||DNUM||' IS '||HIGH);
END;
/

-- OUTPUT:

-- Enter value for dnum: 1
-- old   2: DNUM NUMBER:=&DNUM;
-- new   2: DNUM NUMBER:=1;
-- HIGHEST BASIC FROM DEPARTMENT1 IS 6010

-- PL/SQL procedure successfully completed.


-- ---------------------------------------------------------------------------------------------------- --
-- XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX --
-- XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX --
-- ---------------------------------------------------------------------------------------------------- --


-- TRIGGER:

Create account table(accno,cname,balance,branchname)
Create table loan(loanno,amt,branchname)
Borrower table(cname,loanno)

-- ---------------------------------------------------------------------------------------------------- --

-- Create the trigger to perform the following operations. Whenever the balance become negative,create a loan in the amount of overdraft.
-- The loanno is given same as accno



CREATE TABLE ACCOUNT(ACCNO NUMBER(5),CNAME VARCHAR(10),BALANCE NUMBER(5),BNAME VARCHAR(10));


-- OUTPUT: Table created.


-- ---------------------------------------------------------------------------------------------------- --

DESC ACCOUNT;

-- OUTPUT: 

-- Name             Type
-- ------------   -------------
-- ACCNO            NUMBER(5)
-- CNAME            VARCHAR2(10)
-- BALANCE          NUMBER(5)
-- BNAME            VARCHAR2(10)

-- ---------------------------------------------------------------------------------------------------- --

CREATE TABLE LOAN(LOANNO NUMBER(5),AMOUNT NUMBER(5),BNAME VARCHAR(10));

-- OUTPUT: Table created.

-- ---------------------------------------------------------------------------------------------------- --


DESC LOAN;

-- OUTPUT: 

-- Name       Type
-- -------    --------
-- LOANNO    NUMBER(5)
-- AMOUNT    NUMBER(5)
-- BNAME     VARCHAR2(10)


-- ---------------------------------------------------------------------------------------------------- --


CREATE TABLE BORROWER1(NAME VARCHAR(10),LOANNO NUMBER(5));

-- OUTPUT: Table created.

-- ---------------------------------------------------------------------------------------------------- --

CREATE OR REPLACE TRIGGER OVERDRAFT AFTER UPDATE ON ACCOUNT
FOR EACH ROW
WHEN(NEW.BALANCE<0)
BEGIN
INSERT INTO LOAN VALUES(:NEW.ACCNO,:NEW.BALANCE-1,:NEW.BNAME);
INSERT INTO BORROWER1 VALUES(:NEW.CNAME,:NEW.ACCNO);
DBMS_OUTPUT.PUT_LINE('KEEP MINIMUM BALANCE');
END;
/

-- OUTPUT: Trigger created.

-- ---------------------------------------------------------------------------------------------------- --


INSERT INTO ACCOUNT VALUES(302,'ARYA',20000,'PALA');

UPDATE ACCOUNT SET BALANCE=BALANCE*-1 WHERE ACCNO=302;

-- OUTPUT: KEEP MINIMUM BALANCE

-- ---------------------------------------------------------------------------------------------------- --


SELECT * FROM ACCOUNT;

-- OUTPUT: 
--  ACCNO      CNAME     BALANCE   BNAME
--  ------     -----     -------   ------
--  302        ARYA      -20000    PALA

-- ---------------------------------------------------------------------------------------------------- --

SELECT * FROM LOAN;

-- OUTPUT: 

--  ACCNO CNAME    BALANCE  BNAME
-- ------ -------- -------  -----
--    302 ARYA     -20000   PALA


-- ---------------------------------------------------------------------------------------------------- --


SELECT * FROM BORROWER;

-- OUTPUT: ORA-00942: table or view does not exist

-- ---------------------------------------------------------------------------------------------------- --

SELECT * FROM BORROWER1;

-- OUTPUT:

-- NAME       LOANNO
-- ---------- ------
-- ARYA       302

-- NOTE:

-- HERE THE TRIGGER WORKS ONLY AFTER UPDATION OF EACH ROW OF TABLE ACCOUNT.
-- IN CASE OF BEFORE TRIGGER,THE TRIGGER WORKS FIRSTLY,THEN FURTHER PROCEDURES WORKS...

-- ---------------------------------------------------------------------------------------------------- --

-- Write a trigger that is fired after an insert statement is executed for the
-- student table,the trigger writes the new students id,username and system
-- date in a table called tracking

CREATE TABLE STUDENT(ID NUMBER(3),NAME VARCHAR(19),AGE NUMBER(2),ADDR VARCHAR(15));

-- OUTPUT: Table created.

-- ---------------------------------------------------------------------------------------------------- --

CREATE TABLE TRACKING(SID NUMBER(3),USERNAME VARCHAR(10),SYSTEMDATE DATE);

-- OUTPUT: Table created.

-- ---------------------------------------------------------------------------------------------------- --

CREATE OR REPLACE TRIGGER STUDENT_TRACKING AFTER
INSERT ON STUDENT
FOR EACH ROW
BEGIN
INSERT INTO TRACKING VALUES(:NEW.ID,USER,SYSDATE);
END;
/

-- OUTPUT: Trigger created.

-- ---------------------------------------------------------------------------------------------------- --

INSERT INTO STUDENT VALUES(101,'SMITH',20,'HP');

-- OUTPUT: 1 row created.

-- ---------------------------------------------------------------------------------------------------- --

SELECT * FROM TRACKING;

-- OUTPUT: 

-- SID USERNAME   SYSTEMDAT
-- --- --------  ---------
-- 101 C20AD004   15-DEC-22