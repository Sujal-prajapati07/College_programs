declare
i number;
j number;
n number:=&n;
begin
for i in 1..n
loop
for j in 1..n
	loop
	dbms_output.put(i);
	end loop;
	dbms_output.put_line('');
end loop;
end;
/