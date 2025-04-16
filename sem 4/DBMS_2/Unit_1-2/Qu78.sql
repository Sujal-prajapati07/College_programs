declare
emp_id number:=&emp_id;
emp_name varchar(50):='&emp_name';
sal double precision:=&sal;
bonus number:=0;
begin
if (sal<500)
then
bonus:=sal*0.10;
else if (sal>3500)
then
bonus:=sal*0.12;
else if (sal>1000)
then
bonus:=sal*0.135;
end if;
end if;
end if;

dbms_output.put_line('-------------------------------------------');
dbms_output.put_line('Emp ID is : '||emp_id);
dbms_output.put_line('Employee name is : '||emp_name);
dbms_output.put_line('Employee Salary is : '||sal);
dbms_output.put_line('Employee Bonus is : '||bonus);
end;
/
