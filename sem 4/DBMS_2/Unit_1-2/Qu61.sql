declare
  num NUMBER;
  digit NUMBER;
  sum NUMBER := 0;
begin
  num := &num;

  while num > 0 LOOP
    digit := mod(num, 10);
    sum := sum + digit;
    num := trunc(num / 10);
  end loop;;

  while sum >= 10 LOOP
    num := sum;
    sum := 0;
    while num > 0 LOOP
      digit := mod(num, 10);
      sum := sum + digit;
      num := trunc(num / 10);
    end loop;
  end loop;
  dbms_output.put_line('The single digit sum is: ' || sum);
end;
/