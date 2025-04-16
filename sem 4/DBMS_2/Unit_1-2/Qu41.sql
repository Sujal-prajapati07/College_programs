declare
year double precision:=&year;
begin
if mod(year,4)=0
then
dbms_output.put_line(year||' is leap year');
else
dbms_output.put_line(year||' is not leap year');
end if;
end;
/