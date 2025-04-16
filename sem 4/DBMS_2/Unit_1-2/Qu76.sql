declare
year number:=&year;
digit number;
counter number:=0;
begin
while year > 0
loop
	digit:=mod(year,10);
	if digit in (1,3,5,7,9)
	then
	counter:=counter+1;
	end if;
	year:=trunc(year/10);
end loop;
dbms_output.put_line('TOTAL ODD DIGIT IN YEAR IS : '||counter);
end;
/