declare
base_number number:=&base_number;
power_number number:=&power_number;
result number:=1;
begin
for i in 1..power_number
loop
  result:=result*base_number;
end loop;
dbms_output.put_line('Result of '||base_number||' raise to the power of '||power_number||' is '||result);
end;
/