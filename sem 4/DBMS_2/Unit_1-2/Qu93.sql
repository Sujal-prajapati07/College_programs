declare
i number:=&i;
j number:=&j;
begin
for i in 1..5
loop
for j in 1..5
	loop
	dbms_output.put(j);
	end loop;
	dbms_output.put_line('');
end loop;
end;
/