declare
num number;
reminder number;
real_num number;
result number;

begin
for num in 1..1000
loop
real_num:=num;
result:=0;
  while real_num!=0
  loop
  reminder:=mod(real_num,10);
  result:=result+reminder*reminder*reminder;
  real_num:=trunc(real_num/10);
end loop;

if result=num
then
dbms_output.put_line(num||' is a armstrong number');
end if;
end loop;
end;
/