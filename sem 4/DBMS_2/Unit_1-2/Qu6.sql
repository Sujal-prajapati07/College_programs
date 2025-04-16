declare
total number:=0;
begin
for i in 1..100
loop
total:=total+i;
dbms_output.put_line(total);
end loop;
--dbms_output.put_line(total);
end;
/