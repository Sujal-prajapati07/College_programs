declare
A number:=&A;
B number:=&B;
C number:=&C;
begin
if (A>B and A>C)
then
dbms_output.put_line('A is greater');
else if(B>A and B>C)
then
dbms_output.put_line('B is greater');
else
dbms_output.put_line('C is greater');
end if;
end if;
end;
/