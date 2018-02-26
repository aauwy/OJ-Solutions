program LuoguP1478(input,output);
var
 n,s,a,b:longint;
 xi,yi:array of longint;
 i,j:longint;
procedure quicksort(var a:array of longint;l,r:longint);
var 
 i,j,x:longint;
begin
  if l>=r then exit;
  i:=l;
  j:=r;
  x:=a[i];
  while i<=j do 
   begin
    while (i<j) and (a[j]>x) do dec(j);
    if i<j then
      begin
      a[i]:=a[j];
      inc(i);
      end;
    while (i<j) and (a[i]<x) do inc(i);
    if i<j then 
      begin
      a[j]:=a[i];
      dec(j);
      end;
    a[i]:=x;
    quicksort(a,l,i-1);
    quicksort(a,i+1,r);
    end;
end;
begin
 readln(n,s);
 readln(a,b);
 a:=a+b;b:=0;
 setlength(xi,n);setlength(yi,n);
 for i:=1 to n do readln(xi[i],yi[i]);
 quicksort(yi,1,n);
 i:=1;j:=1;
 repeat
  if xi[j]<=a then
  begin
   s:=s-yi[i];
   inc(i);
   inc(j)
  end
  else inc(j)
  until yi[j+1]>s;
 writeln(i);
end.