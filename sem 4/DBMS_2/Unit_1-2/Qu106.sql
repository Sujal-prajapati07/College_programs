--sysdate is a function it's sreturns the current date and time from your pc clock
--dual is dummy table when you write a select then you will must write a dual
--TO_NUMBER is converts a string to a number.

declare
current_time number;
begin 
select to_number(to_char(sysdate,'HH24'))into current_time from dual;
if current_time between 0 and 11
then
dbms_output.put_line('GOOD MORNING');
else if current_time between 12 and 16
then
dbms_output.put_line('GOOD AFTERNOON');
else if current_time between 17 and 20
then
dbms_output.put_line('GOOD EVENING');
else
dbms_output.put_line('GOOD NIGHT');
end if;
end if;
end if;
end;
/