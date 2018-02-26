program luogu1424;
var
 date:integer;
 n:longint;
 km:qword;
function weekend(var d:integer):boolean;
begin
 weekend:=false;
 if (d mod 6=0) or (d mod 7=0) then weekend:=true;
end;
begin
 readln(date,n);
 km:=0;
 repeat
  if weekend(date)=false then inc(km,250);
  dec(n);
  inc(date)
  until n=1;
 writeln(km);
end.