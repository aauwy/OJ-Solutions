//program LuoguP1071;
//var
 //r1,r2,r3:ansistring;
 //i,j,k:longint;
 //tf,wrfa:boolean;
 //tfa:array[1..26] of boolean;
//procedure failed;
//begin
 //if wrfa=false then writeln('Failed');
 //tf:=true;
 //wrfa:=true;
//end;
//begin
 //wrfa:=false;
 //tf:=false;
 //for i:=1 to 101 do tfa[i]:=false;
 //readln(r1);
 //readln(r2);
 //readln(r3);
 //if length(r1)<>length(r2) then failed;
 //for i:=1 to length(r1) do
 //begin
  //if tf=false then tfa[ord(r1[i])-64]:=true else failed;
 //end;
 //for i:=1 to 26 do tfa[i]:=false;
 //for i:=1 to length(r3) do
  //for j:=1 to length(r1) do
  //begin
   //if (r1[j]=r3[i]) and (tfa[ord(r3[i])-64]=true) then failed;
   //if (r1[j]=r3[i]) and (tfa[ord(r3[i])-64]=false) and (tf=false) then
   //begin
    //r3[i]:=r2[j];
    //tfa[ord(r3[i])-64]:=true;
    //break;
   //end;   
  //end;
 //if tf=false then writeln(r3);
//end.s
var
  str1,str2,s,s1,str11,str22:string;
  i,j,i1,j1,p,p1,sum1,sum2:longint;
  bo1,bo2:array[65..90] of boolean;
  t:char;
begin
  readln(str1);
  readln(str2);
  readln(s);
  str11:=str1;//��Ϊ�����������֮���������,������Ҫ��ԭ��������
  str22:=str2;//ͬ��
  for i:=1 to length(str1)-1 do//��������(��Ϊ����С)
    for j:=i+1 to length(str1) do
    if ord(str1[i])>ord(str1[j]) then begin//ȥ��str1
      t:=str1[i];
      str1[i]:=str1[j];
      str1[j]:=t;
    end;
  for i1:=1 to length(str2)-1 do
    for j1:=i1+1 to length(str2) do
    if ord(str2[i1])>ord(str2[j1]) then begin//ȥ��str2
      t:=str2[i1];
      str2[i1]:=str2[j1];
      str2[j1]:=t;
    end;
  for i:=1 to length(str1) do
    bo1[ord(str1[i])]:=true;
  for i:=65 to 90 do
    if bo1[i]=true then inc(sum1);//��ʵһ��length���ܽ���İ�,��֪��Ϊʲô��Ҫ��ô��
  for i1:=1 to length(str2) do
    bo2[ord(str2[i1])]:=true;
  for i1:= 65 to 90 do
    if bo2[i1]=true then inc(sum2);//��ʵһ��length���ܽ���İ�,��֪��Ϊʲô��Ҫ��ô��
  if sum1<>sum2 then begin//��û��û���жϵ��ַ�
    writeln('Failed');
    halt;
  end;
  for i:=1 to length(str11)-1 do//ͬһ���ַ���Ӧ���������
    for j:=i+1 to length(str11) do
    if (str11[i]=str11[j]) and (str22[i]<>str22[j]) then begin
      writeln('Failed');
      halt;
    end;
  if sum1<26 then begin//ԭ���ľ�����26��(ԭ���Ĳ���26��,��ԭ���ľ���)
    writeln('Failed');
    halt;
  end;
  for i:=1 to length(s) do
    for j:=1 to length(str11) do
    if s[i]=str11[j] then begin
      s1:=s1+str22[j];
      break;
    end;//����
  writeln(s1);
end.s