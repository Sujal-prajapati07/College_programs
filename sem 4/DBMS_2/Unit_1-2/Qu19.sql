declare
fact number:=1;
begin
for i in 1..10
loop
fact:=fact*i;
dbms_output.put_line('Factorial of '||i||' is '||fact);
end loop;
end;
/