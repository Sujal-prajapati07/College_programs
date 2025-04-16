declare
total number:=0;
begin
for i in 1..100
loop
if mod(i,2)!=0
then
total:=total+i;
--dbms_output.put_line(total);
else
dbms_output.put_line(' ');
end if;
end loop;
dbms_output.put_line('Sum of all odd digit is : '||total);
end;
/