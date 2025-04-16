declare
  n number:=&n;
  i number;
  factorial number;
  temp number;
  result number:=0;
begin
for i in 1..n 
loop
    factorial := 1;
    for j in 1..i 
    loop
    factorial := factorial * j;
    end loop;
    temp := 1 / factorial;
    result:=result+temp;
  end loop;
  dbms_output.put_line('The sum of the series is: ' || result);
end;
/