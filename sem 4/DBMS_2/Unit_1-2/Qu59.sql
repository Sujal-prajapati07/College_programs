declare
str1 varchar(100):='&str1';
str2 varchar(100):='&str2';
begin
if length(str1) > length(str2)
then
dbms_output.put_line('The larger string is : '||str1);
else if length(str2) > length(str1)
then
dbms_output.put_line('The larger string is : '||str2);
else
dbms_output.put_line('Both strings are equal');
end if;
end if;
end;
/