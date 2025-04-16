declare
  num number;
  digit number;
  sum_of_digits number;
begin
  for num in 1..9999 
  loop
    sum_of_digits := 0;
    digit := num;
    
    while digit > 0 
    loop
      sum_of_digits := sum_of_digits + mod(digit, 10);
      digit := trunc(digit / 10);
    end loop;
    
    if sum_of_digits = 9 
    then
      dbms_output.put_line(num);
    end if;
  end loop;
end;
/