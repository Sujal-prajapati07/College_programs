declare
n number:=&n;
begin
for i in 1..n
loop
	for j in reverse 1..i
	loop
	dbms_output.put(j||' ');
	end loop;
	dbms_output.new_line();
end loop;
end;
/