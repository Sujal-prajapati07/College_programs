declare
marks number:=&marks;
begin
if (marks>=60)
then
dbms_output.put_line('Division is first');
else if(marks<60 and marks>=50)
then
dbms_output.put_line('Division is second');
else if(marks<50 and marks>=35)
then
dbms_output.put_line('Division is third');
else
dbms_output.put_line('Fail');
end if;
end if;
end if;
end;
/