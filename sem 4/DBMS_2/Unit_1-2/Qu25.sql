declare
pi double precision:=3.14;
r number:=&r;
ans double precision;
begin
ans:=(2*pi*r);
dbms_output.put_line('Perimeter of a circle is : '||ans);
end;
/
