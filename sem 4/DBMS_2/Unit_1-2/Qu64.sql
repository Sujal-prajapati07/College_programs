declare
quntity number:=&quntity;
price_per_item number:=&price_per_item;
discount double precision:=0;
expenditure double precision;
begin
	if quntity > 1000
	then
		discount:=0.20;
	end if;
	expenditure:=(quntity*price_per_item)-(1*discount);
	dbms_output.put_line('Total expenditure is : '||expenditure);
end;
/