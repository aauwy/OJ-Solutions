program LuoguP3817(input,output);
var
 n,x:int64;
 a:array of int64;
 i:longint;
 count:int64;
begin
 count:=0;
 readln(n,x);
 setlength(a,n+1);
 for i:=1 to n do read(a[i]);
 for i:=2 to n do
 begin
  if a[i-1]+a[i]>x then
  begin
   count:=count+(a[i-1]+a[i]-x);
   a[i]:=x-a[i-1];
  end;
 end;
 writeln(count);
end.        //AC
