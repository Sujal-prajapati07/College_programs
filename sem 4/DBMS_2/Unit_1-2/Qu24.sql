declare
pi double precision:=3.14;
r number:=&r;
ans double precision;
begin
ans:=(pi*r*r);
dbms_output.put_line('Area of circle is : '||ans);
end;
/