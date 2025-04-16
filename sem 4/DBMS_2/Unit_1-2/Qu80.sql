declare
item_no number:=&item_no;
item_name varchar(20):='&item_name';
qty number:=&qty;
unit_price number:=&unit_price;
bill number;
discount number;
total_bill number;
begin
  bill:=qty*unit_price;
  
  if bill > 500
  then
  discount:=bill*0.02;
  else
  discount:=0;
  end if;
  total_bill:=bill-discount;
  
  dbms_output.put_line('----------------------------------------------------');
  dbms_output.put_line('Item number is : '||item_no);
  dbms_output.put_line('Item name is : '||item_name);
  dbms_output.put_line('Quntity is : '||qty);
  dbms_output.put_line('Unit Price is : '||unit_price);
  dbms_output.put_line('Bill : '||bill);
  dbms_output.put_line('Discount : '||discount);
  dbms_output.put_line('----------------------------------------------------');
  dbms_output.put_line('Total bill is : '||total_bill);
end;
/