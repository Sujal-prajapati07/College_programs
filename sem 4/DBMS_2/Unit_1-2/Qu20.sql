declare
num number:=&num;
oct_str varchar(50):='';
begin
while num>0
loop
oct_str:=mod(num,8)||oct_str;
num:=trunc(num/8);
end loop;
dbms_output.put_line(oct_str);
end;
/