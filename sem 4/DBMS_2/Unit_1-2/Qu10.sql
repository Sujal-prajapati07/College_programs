declare
num number:=&num;
digit number;
ans number:=0;
begin
while num is not null and num!=0
loop
digit:=mod(num,10);
ans:=ans+digit;
num:=trunc(num/10);
end loop;
dbms_output.put_line('SUM OF DIGIT IS : '||ans);
end;
/