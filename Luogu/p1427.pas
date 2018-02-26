program LuoguP1427(input,output);
var
 a:array[1..101] of int64;
 n,i:longint;
 temp:int64;
begin
 n:=1;
 temp:=1;
 repeat
  read(temp);
  a[n]:=temp;
  inc(n)
  until temp=0;
 for i:=n-2 downto 1 do write(a[i],' ');
end.