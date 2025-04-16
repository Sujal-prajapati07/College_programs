declare
A number:=&A;
B number:=&B;
c number;
begin
dbms_output.put_line('---------------------------------------------');
dbms_output.put_line('Before swaping A value is : '||A);
dbms_output.put_line('Before swaping B value is : '||B);
c:=a;
a:=b;
b:=c;
dbms_output.put_line('---------------------------------------------');
dbms_output.put_line('After swaping A value is : '||A);
dbms_output.put_line('After swaping B value is : '||B);
end;
/