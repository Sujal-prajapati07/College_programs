declare
num number:=&num;
bin_str varchar(50):='';
begin
while num>0
loop
bin_str:=mod(num,2)||bin_str;
num:=trunc(num/2);
end loop;
dbms_output.put_line(bin_str);
end;
/