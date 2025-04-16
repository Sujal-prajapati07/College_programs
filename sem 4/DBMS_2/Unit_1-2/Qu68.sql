declare
hours number:=&hours;
minute number:=&minute;
total_seconds number;
begin
total_seconds:=(hours*3600)+(minute*60);
dbms_output.put_line('TOTAL SECOND IS : '||total_seconds);
end;
/