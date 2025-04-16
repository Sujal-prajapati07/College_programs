declare
str varchar(50):='&str';
reverse_str varchar(50):='';
begin
	for i in reverse 1..length(str)
	loop
	reverse_str:=reverse_str||substr(str,i,1);
	end loop;
if str=reverse_str
then
dbms_output.put_line(str||' is a palindrom');
else
dbms_output.put_line(str||' is not a palindrom');
end if;
end;
/