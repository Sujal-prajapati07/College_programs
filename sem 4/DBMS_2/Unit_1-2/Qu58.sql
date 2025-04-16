declare
char_count number:=0;
s varchar(50):='&s';
begin
for i in 1..length(s)
loop
char_count:=char_count+1;
end loop;
dbms_output.put_line('String is '||s||' and total char in string is : '||char_count);
end;
/