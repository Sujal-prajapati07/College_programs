declare
kilometer number:=&kilometer;
meter number;
centimeter number;
feet double precision;
begin
meter:=kilometer*1000;
centimeter:=kilometer*100000;
feet:=kilometer*3280.84;
dbms_output.put_line('kilometer into meter distance is : '||meter);
dbms_output.put_line('kilometer into centimeter distance is : '||centimeter);
dbms_output.put_line('kilometer into feet distance is : '||feet);
end;
/