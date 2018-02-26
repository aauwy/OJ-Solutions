program noiOj1016(input,output);
const 
 monthList:array[1..12] of integer=(31,28,31,30,31,30,31,31,30,31,30,31);
var
 year,month:longint;
begin
 readln(year,month);
 if month<>2 then writeln(monthList[month])
  else if (year mod 4=0) and (year mod 100<>0) or (year mod 400=0) then writeln('29')
   else writeln('28');
 readln;
end.