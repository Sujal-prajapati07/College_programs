declare
Character char:='&Character';
begin
if Character in ('a','e','i','o','u')
then
dbms_output.put_line('vowel');
else
dbms_output.put_line('constant');
end if;
end;
/