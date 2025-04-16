declare
year number:=&year;
digit number;
counter number:=0;
begin
while year > 0
loop
	digit:=mod(year,10);
	if digit in (0,2,4,6,8)
	then
	counter:=counter+1;
	end if;
	year:=trunc(year/10);
end loop;
dbms_output.put_line('TOTAL EVEN DIGIT IN YEAR IS : '||counter);
end;
/