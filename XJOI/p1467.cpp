#include <cstdio>
 
#include <cstring>
int main(){
int n,m,x,y;
scanf("%d%d%d%d",&n,&m,&x,&y);
long long f[26][26];
int i,j;
for(i=0;i<=25;i++)
for(j=0;j<=25;j++)
f[i][j]=1;
 
if(x>=2&&y>=1) f[x-2][y-1]=0;
if(x>=2) f[x-2][y+1]=0;
if(x>=1&&y>=2) f[x-1][y-2]=0;
if(x>=1) f[x-1][y+2]=0;
if(y>=2) f[x+1][y-2]=0;
f[x+1][y+2]=0;
if(y>=1) f[x+2][y-1]=0;
f[x+2][y+1]=0;
f[x][y]=0;
for(i=0;i<=25;i++){
for(j=0;j<=25;j++){
if(f[i][j]==0) continue;
if(i==0&&j-1>=0){ f[i][j]=f[i][j-1]; continue;}
if(j==0&&i-1>=0){ f[i][j]=f[i-1][j]; continue;}
if(i==0&&j==0){ f[i][j]=1; continue;}
f[i][j]=f[i-1][j]+f[i][j-1];
}
}
printf("%lld",f[n][m]);
return 0;
}
/*
var a:array [0..100000] of int64;
    b,c,d,i,j,k,m,n,x,y:longint;
begin
  read(m,n,x,y);
  a[0]:=1;
  for i:=0 to m do                         {逐个计算每个点路径数}
  for j:=0 to n do
  begin
    if j>0 then
    a[j]:=a[j]+a[j-1];                       {递推}
    if (i=(x-2)) or (i=(x+2)) then     {检查是否是控制点}
      if (j=(y-1)) or (j=(y+1)) then a[j]:=0;
    if (i=(x-1)) or (i=(x+1)) then
      if (j=(y-2)) or (j=(y+2)) then a[j]:=0;
    if i=x then
      if j=y then a[j]:=0;                  {控制点置为0}
  end;
  writeln(a[n]);
end.
*/
