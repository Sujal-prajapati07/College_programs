declare
num number:=&num;
fact number:=1;
begin
for i in 1..num
loop
fact:=fact*i;
end loop;
dbms_output.put_line('Factorial of '||num||' is '||fact);
end;
/