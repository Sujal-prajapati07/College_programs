declare
anual_income number:=&anual_income;
tax double precision:=0;
begin
if anual_income > 60000
then
tax:=anual_income*0.10;
else if anual_income > 100000 
then
tax:=800+(anual_income*0.16);
else if anual_income > 140000
then
tax:=2500+(anual_income*0.25);
else
tax:=0;
end if;
end if;
end if;
dbms_output.put_line('The income tax for annual income of '||anual_income||' is '||tax);
end;
/