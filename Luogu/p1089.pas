program luogu1089;
var
 a:array[1..12] of integer;
 err,sm,tmp,mymoney:integer; //Error,SaveMoney,Template
 i:integer;
begin
 for i:=1 to 12 do readln(a[i]);
 sm:=0;err:=0;i:=0;
 for i:=1 to 12 do
 begin
  if mymoney+300<a[i] then
  begin
   err:=0-i;
   break;
  end
  else
  begin
   tmp:=(300-a[i]+mymoney) div 100;
   sm:=sm+tmp;
   mymoney:=(300-a[i]+mymoney) mod 100;
  end;
 end;
 if err=0 then writeln(sm*120+mymoney)
  else writeln(err);
end.

  
  