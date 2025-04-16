declare
side number:=&side;
area number;
begin
area:=side*side;
dbms_output.put_line('Area of sqaure is : '||area);
end;
/