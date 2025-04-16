declare
days number:=&days;
year number;
month number;
rem_days number;
begin
year:=trunc(days/365);
rem_days:=mod(days,365);

month:=trunc(days/30);
rem_days:=mod(rem_days,30);

dbms_output.put_line('Year : '||year);
dbms_output.put_line('Month : '||month);
dbms_output.put_line('Remaning Days : '||rem_days);
end;
/