declare
cost_price double precision:=&cost_price;
sell_price double precision:=&sell_price;
profit_loss double precision;
begin
profit_loss:=sell_price-cost_price;
if (profit_loss>0)
then
dbms_output.put_line('Profit : '||profit_loss);
else if (profit_loss<0)
then
dbms_output.put_line('Loss : '||ABS(profit_loss)); --abs stands for absolute value ex..ans is-5 then give the 5
else
dbms_output.put_line('No Profit,No Loss');
end if;
end if;
end;
/