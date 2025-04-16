declare
cmr number:=&cmr;
lmr number:=&lmr;
units number;
total_bill number;
begin
units:=cmr-lmr;

if units <=100
then
total_bill:=units*50;
else if units <=200
then
total_bill:=100*50+(units-100)*0.25;
else
total_bill:=100*50+100*0.25+(units-200)*1.25;
end if;
end if;
dbms_output.put_line('Total bill is : '||total_bill);
end;
/