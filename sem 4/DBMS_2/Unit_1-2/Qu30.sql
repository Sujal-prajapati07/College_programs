declare
A number:=&A;
B number:=&B;
begin
dbms_output.put_line('---------------------------------------------');
dbms_output.put_line('Before swaping A value is : '||A);
dbms_output.put_line('Before swaping B value is : '||B);
A:=A+b; --8+9=17
B:=A-B;	--17-9=8
A:=A-B;	--17-8=9
dbms_output.put_line('---------------------------------------------');
dbms_output.put_line('After swaping A value is : '||A);
dbms_output.put_line('After swaping B value is : '||B);
end;
/