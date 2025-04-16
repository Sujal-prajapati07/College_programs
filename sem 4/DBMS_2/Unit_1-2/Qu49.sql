declare
n number:=&n;
begin
for i in 1..10
loop
dbms_output.put(n || 'X' || i || '=' || n*i);
end loop;
dbms_output.put_line(' ');
end;
/