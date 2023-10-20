-- For correcting table view in correct format, i.e without tab down to next line

set lines 256;
set wrap off;

-- If ↑ doesn't work, use this ↓

set lines 256;
set trimout off;
set tab on;

-- To set this ↑ permanently



-- Create a file (or edit it if it's already there) called glogin.sql
-- in the <ORACLE_HOME>\sqlplus\admin directory

-- (ex. C:\Oracle\Ora10g\sqlplus\admin\glogin.sql)

-- open the 'glogin.sql' file on any text editor and paste:

-- set lines 256;
-- set wrap off;

-- save and close.
-- This 'glogin.sql' file will get executed every time you log on to SQL Plus. Hence doing it automatically


-- ---------------------------------------------------------------------------------------------------- --


-- To print date in full format (DD-MM-YYYY, 06-MAR-2002)
--    You can change DD-MM-YYYY to any other format
--        Enter dates as you set in the format, i.e  06-MAR-2002 for DD-MM-YYYY, MAR-06-2002 for MM-DD-YYYY


ALTER SESSION SET NLS_DATE_FORMAT = 'DD-MM-YYYY';