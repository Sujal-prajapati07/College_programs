declare
n number:=&n;
begin
for i in 1..n
loop
	for j in 1..i
	loop
	if mod(i+j,2)=0
	then
	dbms_output.put('1 ');
	else
	dbms_output.put('0 ');
	end if;
	end loop;
	dbms_output.put_line(' ');
end loop;
end;
/