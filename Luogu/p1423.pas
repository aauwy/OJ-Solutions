program p1423;
var
 r,tmp:extended;
 i:longint;
begin
 readln(r);
 i:=0;tmp:=2;
 repeat
  inc(i);
  r:=r-tmp;
  tmp:=tmp*0.98
  until r<=0;
 writeln(i);
end.