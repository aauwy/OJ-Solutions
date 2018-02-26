program p1307;
var
 re:ansistring;
 i:longint;
begin
 readln(re);
 i:=length(re);
 repeat
  if re[i]='0' then re:=copy(re,1,length(re)-1);
  dec(i)
  until re[i]<>'0';
 if re[1]='-' then
 begin
  write('-');
  for i:=length(re) downto 2 do write(re[i]);
  writeln;
 end
 else for i:=length(re) downto 1 do write(re[i]);
end.
  
   