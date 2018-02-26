program LuoguP1579(input,output);
var
 a:array[1..100000] of longint;
 i,j,k:longint;
 n:longint;
 tm1,tm2,tm3:longint;
 dc:boolean;
function is_prime(var x:longint):boolean;
var
 c:longint;
begin
 is_prime:=true;
 if x<=1 then is_prime:=false
 else
 for c:=2 to round(sqrt(x)) do if x mod c=0 then
 begin
  is_prime:=false;
  break;
 end;
end;
begin
 dc:=false;
 readln(n);
 for i:=1 to n do
  for k:=i to n do
  begin
   if dc=true then break
   else
   begin
    tm1:=i;tm2:=k;tm3:=n-i-k;
    if (is_prime(tm1)=false) and (dc=false) then continue
     else if (is_prime(tm2)=false) and (dc=false) then continue
      else if (is_prime(tm3)=false) and (dc=false) then continue
       else if dc=false then
       begin
        writeln(tm1,' ',tm2,' ',tm3);
        dc:=true;
        break;
       end;
   end;
  end;
end.