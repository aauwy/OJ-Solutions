program LuoguP1308(input,output);
var
 data,find:ansistring;
 i,j,rec,rec2:longint;
 lenfind,lendata:longint;
 tf:boolean;
 wordlist:array[1..1000001] of ansistring;
 wrl:array[1..2] of longint;
begin
 tf:=false;j:=0;rec:=0;rec2:=0;wrl[1]:=0;wrl[2]:=0;
 readln(find);
 readln(data);
 find:=upcase(find);
 data:=upcase(data);
 lenfind:=length(find);
 lendata:=length(data);
 for i:=1 to length(data) do
 begin
  if data[i]=' ' then
  begin
   rec2:=rec;
   rec:=i;
   inc(j);
   wordlist[j]:=copy(data,rec2+1,rec-1);
  end;
 end;
 for i:=1 to j do
 begin
  if (wordlist[i]=find) and (tf=false) then
  begin
   inc(wrl[1]);
   wrl[2]:=i;
   tf:=true;
  end;
 end;
 if tf=true then writeln(wrl[1],' ',wrl[2])
 else writeln('-1');
end.