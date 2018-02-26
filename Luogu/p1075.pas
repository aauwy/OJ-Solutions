program LuoguP1075(input,output);
uses
 math;
var
 n:longint;
 p,p2:longint;
 i:longint;
begin
 readln(n);
 for i:=2 to trunc(sqrt(n)) do
  if n mod i=0 then break;
 p:=i;
 p2:=n div i;
 writeln(max(p,p2));
end.