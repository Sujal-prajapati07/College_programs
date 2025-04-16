declare
seq_string varchar(500):='';
begin
for i in 1..25
loop
seq_string:=seq_string || i || ' ';
end loop;
dbms_output.put_line(seq_string);
end;
/