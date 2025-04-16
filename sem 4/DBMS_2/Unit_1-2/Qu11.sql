declare
num number:=&num;
digit number;
reversed number:=0;
begin
while num is not null and num!=0
loop
digit:=mod(num,10);
reversed:=reversed*10+digit;
num:=trunc(num/10);
end loop;
dbms_output.put_line('REVERSED NUMBER IS : '||reversed);
end;
/