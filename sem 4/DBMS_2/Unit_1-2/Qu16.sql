declare
a number:=0;
b number:=1;
c number;
begin
for i in 1..10
loop
  c:=a+b;
  a:=b;
  b:=c;
dbms_output.put_line(c);
end loop;
end;
/