program luogup3383;
var
 m,i:longint;
 a:longint;
function zhishu(var l:longint):boolean;
var
 i:longint;
 jumpou:boolean;
begin
 zhishu:=true;
 jumpou:=false;
 if l<2 then
 begin
  zhishu:=false;
  jumpou:=true;
 end;
 if l=2 then jumpou:=true;
 if (l>2) and (l mod 2=0) then
 begin 
  zhishu:=false;
  jumpou:=true;
 end;
 if jumpou=false then
  for i:=3 to trunc(sqrt(l)) do
   if l mod i=0 then 
   begin
    zhishu:=false;
    break;
   end;
end;
begin
 readln(a,m);
 for i:=1 to m do
 begin
  readln(a);
  if zhishu(a)=true then writeln('Yes')
   else writeln('No');
 end;
end.
 
   {Accepted}