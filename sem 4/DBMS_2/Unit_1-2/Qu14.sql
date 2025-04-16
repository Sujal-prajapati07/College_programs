declare
n number;
i number;
counter number;
begin
dbms_output.put_line('Prime number between 1 to 100 is : ');
for n in 1..100
loop
counter:=0;
	for i in 1..n
	loop
	if n mod i=0
	then
		counter:=counter+1;
	end if;
	end loop;
	if counter=2 
	then
		dbms_output.put_line(n);
	end if;
end loop;
end;
/