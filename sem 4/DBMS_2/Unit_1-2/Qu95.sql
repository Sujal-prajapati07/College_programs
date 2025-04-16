declare
i number;
j number;
n number:=&n;
begin
for i in reverse 1..n
loop
for j in 1..i
	loop
	dbms_output.put(i);
	end loop;
	dbms_output.put_line('');
end loop;
end;
/