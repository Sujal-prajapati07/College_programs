declare
num1 number:=&num1;
num2 number:=&num2;
num3 number:=&num3;
begin
dbms_output.put_line('ALL COMBINATION ARE HERE : ');
for i in num1..num3
loop
  for j in num1..num3
	loop
	 for k in num1..num3
	   loop
	   if i!=j and j!=k and i!=k
	   then
	   dbms_output.put_line(i||' '||j||' '||k);
	   end if;
	   end loop;
	end loop;
end loop;
end;
/
