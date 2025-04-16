declare
basic_salary double precision:=&basic_salary;
ta double precision:=&ta;
da double precision:=&da;
hra double precision:=&hra;
lic double precision:=&lic;
gross_sal double precision;
begin
ta:=basic_salary * 0.20;
da:=basic_salary * 0.10;
hra:=basic_salary * 0.30;
lic:=basic_salary * 0.05;
gross_sal:=basic_salary+ta+da+hra-lic;
dbms_output.put_line('Gross Salary is : '||gross_sal);
end;
/