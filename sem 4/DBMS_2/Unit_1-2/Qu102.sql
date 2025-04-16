declare
a number:=&a;
b number:=&b;
ans number;
product number;
begin
ans:=a+b;
product:=a*b;
dbms_output.put_line('Sum of both value is : '|| ans);
dbms_output.put_line('Product of both value is : '|| product);
end;
/