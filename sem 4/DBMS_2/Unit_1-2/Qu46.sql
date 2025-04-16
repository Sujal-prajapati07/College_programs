declare
A number:=&A;
B number:=&B;
C number:=&C;
D number:=&D;
sum1 number;
sum2 number;
begin
sum1:=power(A,3)+power(B,3);
sum2:=power(C,3)+power(D,3);

if sum1=sum2
then
dbms_output.put_line('Number '||A||B||C||D||' are Ramanujan Number');
else
dbms_output.put_line('Number '||A||','||B||','||C||','||D||' are not Ramanujan Number');
end if;
end;
/