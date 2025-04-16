declare
temp_cels number:=&temp_cels;
farenhit double precision;
begin
farenhit:=(temp_cels*1.8)+32;
dbms_output.put_line(farenhit);
end;
/