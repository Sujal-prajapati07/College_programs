declare
  n number:=&n;
  i number;
  result number := 0;
begin
  for i in 1..n 
  loop
    result := result + 1 / i;
  end loop;
  dbms_output.put_line('The sum of the series is: ' || result);
end;
/