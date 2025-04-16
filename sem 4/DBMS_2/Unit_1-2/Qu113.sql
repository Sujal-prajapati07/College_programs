declare
real_number number:=567.89;
integer_value number;
begin
integer_value:=trunc(real_number);
dbms_output.put_line('Integer value is : '||integer_value);
end;
/