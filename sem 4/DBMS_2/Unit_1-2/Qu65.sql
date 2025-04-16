declare
str1 varchar(100):='&str1';
ans number;
begin
ans:=length(str1);
dbms_output.put_line('Total string length is : '||ans);
end;
/