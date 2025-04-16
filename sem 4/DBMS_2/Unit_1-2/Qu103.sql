declare
num1 NUMBER;
num2 NUMBER;
remainder NUMBER;
begin
num1 := &num1;
num2 := &num2;
remainder := num1;
while remainder >= num2 
loop
    remainder := remainder - num2;
end loop;
  dbms_output.put_line('The remainder when ' || num1 || ' is divide by ' || num2 || ' is ' || remainder);
end;
/