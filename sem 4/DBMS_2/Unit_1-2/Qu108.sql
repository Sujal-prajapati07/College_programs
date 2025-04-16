declare
str1 varchar(100):='&str1';
character_count number;
word_count number;
begin
character_count:=length(str1); --length is user for find how many character in the string
word_count:=length(regexp_count(str1,'\S+')); --regexp_count is a function for word count
dbms_output.put_line('Total character in string is : '||character_count);
dbms_output.put_line('Total word count in string is : '||Word word_count);
end;
/