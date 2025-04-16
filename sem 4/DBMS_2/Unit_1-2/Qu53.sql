declare
l number:=&l;
b number:=&b;
ans number;
begin
ans:=2*(l+b);
dbms_output.put_line('The Parameter of rectangle is : '||ans);
end;
/