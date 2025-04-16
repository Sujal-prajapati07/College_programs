declare
num number:=&num;
begin
for i in reverse 1..num
loop
	for j in reverse 1..i
	loop
	dbms_output.put(j);
	end loop;
	dbms_output.new_line;
end loop;
end;
/