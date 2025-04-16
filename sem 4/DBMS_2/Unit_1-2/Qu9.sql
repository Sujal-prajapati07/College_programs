declare
num number;
c number:=0;
begin
num:=&num;
while num is not null and num!=0
loop
num:=trunc(num/10);
c:=c+1;
end loop;
dbms_output.put_line('TOTAL NUMBER OF DIGIT IS : '||c);
end;
/