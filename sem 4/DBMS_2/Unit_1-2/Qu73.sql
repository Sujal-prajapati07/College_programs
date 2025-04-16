declare
str varchar(20):='ORACLE';
len number:=length(str);
begin
for i in 1..len
loop
dbms_output.put_line(substr(str,1,i));
end loop;
end;
/