declare
a number:=&a;
b number:=&b;
i number;
begin
dbms_output.put('EVEN NUMBER IS : ');
for i in a..b
loop
if mod(i,2)=0
then
dbms_output.put(i || ' ');
end if;
end loop;
dbms_output.put_line(' ');
end;
/