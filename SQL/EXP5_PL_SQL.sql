-- Write a PL/SQL block to print "WELCOME ORACLE".

BEGIN
DBMS_OUTPUT.PUT_LINE('WELCOME ORACLE');
END;
/

-- OUTPUT:

-- WELCOME ORACLE
-- PL/SQL procedure successfully completed.

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to swap the values of two variables. Print the variables before and after swaping.

DECLARE
A NUMBER:=&A;
B NUMBER:=&B;
C NUMBER;
BEGIN
DBMS_OUTPUT.PUT_LINE('BEFORE SWAPPING A='||A||'B='||B);
C:=A;
A:=B;
B:=C;
DBMS_OUTPUT.PUT_LINE('AFTER SWAPPING A='||A||'B='||B);
END;
/

-- OUTPUT:

-- Enter value for a: 20
-- old   2: a number :=&a;
-- new   2: a number :=20;
-- Enter value for b: 40
-- old   3: b number :=&b;
-- new   3: b number :=40;
-- Before swappig a=20b=40

-- ---------------------------------------------------------------------------------------------------- --

-- A PL/SQL block to check whether a number is less than 20 or not.

DECLARE
A NUMBER(2):=20;
BEGIN
A:=10;
IF(A<20) THEN
DBMS_OUTPUT.PUT_LINE('A IS LESS THAN 20');
END IF;
DBMS_OUTPUT.PUT_LINE('VALUE OF A IS: '||A);
END;
/

-- OUTPUT:

-- A IS LESS THAN 20
-- VALUE OF A IS: 10

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to read score and display the grade.

DECLARE
S NUMBER(3):=&SCORE;
GRADE CHAR;
BEGIN
IF S>=90 AND S<=100 THEN GRADE:='A';
ELSIF S>=80 AND S<90 THEN GRADE:='B';
ELSIF S>=70 AND S<80 THEN GRADE:='C';
ELSIF S>=60 AND S<70 THEN GRADE:='D';
ELSIF S>0 THEN GRADE:='F';
ELSIF S<0 AND S>100 THEN GRADE:='U';
END IF;
DBMS_OUTPUT.PUT_LINE('SCORE IS '||S);
DBMS_OUTPUT.PUT_LINE('GRADE IS '||GRADE);
END;
/

-- OUTPUT:

-- Enter value for anynum: 34
-- old   2: VNUM NUMBER:=&ANYNUM;
-- new   2: VNUM NUMBER:=34;
-- 34 IS EVENEnter value for score: 63
-- old   2: S NUMBER(3):=&SCORE;
-- new   2: S NUMBER(3):=63;
-- SCORE IS 63
-- GRADE IS D

-- ---------------------------------------------------------------------------------------------------- --

--Write a PL/SQL block to read a number and check whether it is odd or even.

DECLARE
VNUM NUMBER:=&ANYNUM;
BEGIN
CASE
WHEN MOD(VNUM,2)=0 THEN
DBMS_OUTPUT.PUT_LINE(VNUM||' IS EVEN');
ELSE
DBMS_OUTPUT.PUT_LINE(VNUM||' IS ODD');
END CASE;
END;
/

-- OUTPUT:

-- Enter value for anynum: 34
-- old   2: VNUM NUMBER:=&ANYNUM;
-- new   2: VNUM NUMBER:=34;
-- 34 IS EVEN

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to find the average of first ten numbers.

DECLARE
VCOUNT NUMBER(2);
VSUM NUMBER(2):=0;
V_AVG NUMBER(3,2);
BEGIN
VCOUNT:=1;
LOOP
VSUM:=VSUM+VCOUNT;
VCOUNT:=VCOUNT+1;
EXIT WHEN VCOUNT>10;
END LOOP;
V_AVG:=VSUM/(VCOUNT-1);
DBMS_OUTPUT.PUT_LINE('AVERAGE OF 1 TO 10 IS : '||V_AVG);
END;
/

-- OUTPUT:

-- AVERAGE OF 1 TO 10 IS : 5.5

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to read two numbers and print all the numbers between them.

DECLARE
S NUMBER:=&S;
E NUMBER:=&E;
BEGIN
DBMS_OUTPUT.PUT_LINE('THE NUMBERS B/W'||S||' AND '||E||' ARE ');
WHILE(S<=E)
LOOP
DBMS_OUTPUT.PUT_LINE(S);
S:=S+1;
END LOOP;
END;
/

-- OUTPUT:

-- Enter value for s: 3
-- old   2: S NUMBER:=&S;
-- new   2: S NUMBER:=3;
-- Enter value for e: 6
-- old   3: E NUMBER:=&E;
-- new   3: E NUMBER:=6;
-- THE NUMBERS B/W3 AND 6 ARE
-- 3
-- 4
-- 5
-- 6

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to read a number and invert the given number.

DECLARE
N NUMBER;
S NUMBER:=0;
R NUMBER;
K NUMBER;
BEGIN
N:=&N;
K:=N;
LOOP
EXIT WHEN N=0;
S:=S*10;
R:=MOD(N,10);
S:=S+R;
N:=TRUNC(N/10);
END LOOP;
DBMS_OUTPUT.PUT_LINE('THE INVERTED NUMBER OF '||K||' IS '||S);
END;
/

-- OUTPUT:

-- Enter value for n: 54
-- old   7: N:=&N;
-- new   7: N:=54;
-- THE INVERTED NUMBER OF 54 IS 45

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to read a number and invert the given number by taking it as a string.

DECLARE
A VARCHAR2(5);
B NUMBER;
C VARCHAR2(5);
I NUMBER;
BEGIN
A:='&NUM';
B:=LENGTH(A);
FOR I IN REVERSE 1..B
LOOP
C:=C||SUBSTR(A,I,1);
END LOOP;
DBMS_OUTPUT.PUT_LINE('INVERTED NUMBERS IS '||C);
END;
/

-- OUTPUT:

-- Enter value for num: 43
-- old   7: A:='&NUM';
-- new   7: A:='43';
-- INVERTED NUMBERS IS 34

-- ---------------------------------------------------------------------------------------------------- --

-- Write a PL/SQL block to find the prime numbers between 2 and 50.

DECLARE
I NUMBER(3);
J NUMBER(3);
BEGIN
I:=2;
LOOP
J:=2;
LOOP
EXIT WHEN MOD(I,J)=0 OR (J=I);
J:=J+1;
END LOOP;
IF(J=I) THEN
DBMS_OUTPUT.PUT_LINE(I||' IS PRIME');
END IF;
I:=I+1;
EXIT WHEN I=50;
END LOOP;
END;
/

-- OUTPUT:

-- 2 IS PRIME
-- 3 IS PRIME
-- 5 IS PRIME
-- 7 IS PRIME
-- 11 IS PRIME
-- 13 IS PRIME
-- 17 IS PRIME
-- 19 IS PRIME
-- 23 IS PRIME
-- 29 IS PRIME
-- 31 IS PRIME
-- 37 IS PRIME
-- 41 IS PRIME
-- 43 IS PRIME
-- 47 IS PRIME


-- ---------------------------------------------------------------------------------------------------- --
-- ----------------------------------FAIR RECORD EXPERIMENTS------------------------------------------- --
-- ---------------------------------------------------------------------------------------------------- --

-- EXP 5A) Write a PL/SQL block to read two numbers and print all the numbers between them.

DECLARE
S NUMBER:=&S;
E NUMBER:=&E;
BEGIN
DBMS_OUTPUT.PUT_LINE('THE NUMBERS B/W'||S||' AND '||E||' ARE ');
WHILE(S<=E)
LOOP
DBMS_OUTPUT.PUT_LINE(S);
S:=S+1;
END LOOP;
END;
/

-- OUTPUT:

-- Enter value for s: 3
-- old   2: S NUMBER:=&S;
-- new   2: S NUMBER:=3;
-- Enter value for e: 6
-- old   3: E NUMBER:=&E;
-- new   3: E NUMBER:=6;
-- THE NUMBERS B/W3 AND 6 ARE
-- 3
-- 4
-- 5
-- 6

-- ---------------------------------------------------------------------------------------------------- --

-- EXP 5B) Write a PL/SQL block to read a number and invert the given number by taking it as a string.

DECLARE
A VARCHAR2(5);
B NUMBER;
C VARCHAR2(5);
I NUMBER;
BEGIN
A:='&NUM';
B:=LENGTH(A);
FOR I IN REVERSE 1..B
LOOP
C:=C||SUBSTR(A,I,1);
END LOOP;
DBMS_OUTPUT.PUT_LINE('INVERTED NUMBERS IS '||C);
END;
/

-- OUTPUT:

-- Enter value for num: 43
-- old   7: A:='&NUM';
-- new   7: A:='43';
-- INVERTED NUMBERS IS 34

-- ---------------------------------------------------------------------------------------------------- --

-- EXP 5C) Write a PL/SQL block to find the prime numbers between 2 and 50.

DECLARE
I NUMBER(3);
J NUMBER(3);
BEGIN
I:=2;
LOOP
J:=2;
LOOP
EXIT WHEN MOD(I,J)=0 OR (J=I);
J:=J+1;
END LOOP;
IF(J=I) THEN
DBMS_OUTPUT.PUT_LINE(I||' IS PRIME');
END IF;
I:=I+1;
EXIT WHEN I=50;
END LOOP;
END;
/

-- OUTPUT:

-- 2 IS PRIME
-- 3 IS PRIME
-- 5 IS PRIME
-- 7 IS PRIME
-- 11 IS PRIME
-- 13 IS PRIME
-- 17 IS PRIME
-- 19 IS PRIME
-- 23 IS PRIME
-- 29 IS PRIME
-- 31 IS PRIME
-- 37 IS PRIME
-- 41 IS PRIME
-- 43 IS PRIME
-- 47 IS PRIME