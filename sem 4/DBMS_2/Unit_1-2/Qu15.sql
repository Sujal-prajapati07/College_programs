declare
num number:=&num;
i number;
counter number:=0;
begin
for i in 1..num
loop
	if num mod i=0
	then
		counter:=counter+1;
	end if;
end loop;
if counter=2
then
	dbms_output.put_line(num||' is a Prime Number');
else
	dbms_output.put_line(num||' is Not a Prime number');
end if;
end;
/