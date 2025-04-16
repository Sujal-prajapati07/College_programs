declare
i number:=&i;
j number:=&j;
begin
for i in 1..5
loop
for j in 1..i
	loop
	dbms_output.put(i);
	end loop;
	dbms_output.put_line('');
end loop;
end;
/