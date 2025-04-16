declare
str1 varchar(50):='&str1';
str2 varchar(50):='&str2';
concat_string varchar(100);
begin
concat_string:=str1||' '||str2;
dbms_output.put_line('Concate string is : '||concat_string);
end;
/