type rec=record
a:array[0..1000]of longint;
len:longint;
end;
var i,n,j:longint;
    x:rec;
    s:string;
function plus(a,b:rec):rec;
var i:longint;
begin
  fillchar(plus,sizeof(plus),0);
  for i:=1 to a.len do
  begin
    plus.a[i]:=plus.a[i]+a.a[i]+b.a[b.len-i+1];
    plus.a[i+1]:=plus.a[i+1]+(plus.a[i] div n);
    plus.a[i]:=plus.a[i] mod n;
  end;
  plus.len:=a.len;
  if plus.a[plus.len+1]>0 then inc(plus.len);
end;
function judge(x:rec):boolean;
var i:longint;
    t:char;
    s1,s2:string;
begin
  s1:='';
  s2:='';
  for i:=1 to x.len do
  begin
    t:=chr(x.a[i]+48);
    if x.a[i]=15 then t:='F';
    if x.a[i]=14 then t:='E';
    if x.a[i]=13 then t:='D';
    if x.a[i]=12 then t:='C';
    if x.a[i]=11 then t:='B';
    if x.a[i]=10 then t:='A';
    s1:=s1+t;
    s2:=t+s2;
  end;
  if s1=s2 then exit(true) else exit(false);
end;
begin
  readln(n);
  readln(s);
  for i:=1 to length(s) do x.a[i]:=ord(s[length(s)-i+1])-48;
  x.len:=length(s);
  for i:=1 to x.len do if x.a[i]>16 then x.a[i]:=x.a[i]-7;
  for i:=0 to 30 do
  begin
    if judge(x) then
    begin
      write('STEP=',i);
      halt;
    end;
    x:=plus(x,x);
  end;
  write('Impossible!');
end.
 {Accepted}