---instr is inbuilt method of plsql..it use for search in string..
declare
str varchar(50):='&str';
counter number:=0;
begin
for i in 1..length(str)
loop
if instr('A,E,I,O,U,a,e,i,o,u',substr(str,i,1))>0
then
counter:=counter+1;
end if;
end loop;
dbms_output.put_line(counter);
end;
/