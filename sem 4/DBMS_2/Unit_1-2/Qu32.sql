declare
p number:=&p;
t number:=&t;
r number:=&r;
ans number;
begin
ans:=(p*t*r)/100;
dbms_output.put_line('Simple intrest is : ' ||ans);
end;
/