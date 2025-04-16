declare
cols number:=&cols;
begin
for i in 1..cols
loop
for j in 1..i
loop
dbms_output.put(10*j+2||' ');
end loop;
dbms_output.new_line;
end loop;
end;
/