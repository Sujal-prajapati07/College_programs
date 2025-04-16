declare
num number:=&num;
reminder number;
real_num number;
result number:=0;
begin
real_num:=num;
while num!=0
loop
reminder:=mod(num,10);
result:=result+reminder*reminder*reminder;
num:=trunc(num/10);
end loop;

if result=real_num
then
dbms_output.put_line(real_num||' is a armstrong number');
else
dbms_output.put_line(real_num||' is not a armstrong number');
end if;
end;
/