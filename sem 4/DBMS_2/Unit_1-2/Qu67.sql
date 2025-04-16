declare
n number:=&n;
square_of_digit number:=0;
begin
for i in 1..n
loop
square_of_digit:=square_of_digit+power(i,2); --1*1,2*2,3*3=14
end loop;
dbms_output.put_line('Square of total digit is : '||square_of_digit);
end;
/