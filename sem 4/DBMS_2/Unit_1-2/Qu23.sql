declare
b number:=&b;
h number:=&h;
Ans number;
begin
Ans:=(1/2)*b*h;
dbms_output.put_line('The Area of triangle 3 sides is : '||Ans);
end;
/