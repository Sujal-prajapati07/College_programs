declare
p number:=&p;
r number:=&r;
t number:=&t;
com_intrest number;
begin
com_intrest:=p*power((1+r/100),t)-p;
dbms_output.put_line('Compound intrest is : '||com_intrest);
end;
/