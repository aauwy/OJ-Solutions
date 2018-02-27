/*
作者:方舟
题目:p1012 最大公约数和最小公倍数问题
*/
#include <iostream>

using namespace std;

int x0,y0,tot;

unsigned long long int maxn,aver;

int gcd(int a,int b){

return a%b==0?b:gcd(b,a%b);

}

int lcm(int a,int b){

return (a*b)/gcd(a,b);

}

void dfs(int cs,int ha){

if(cs==1)

for(int i=1;i<=aver;++i){

dfs(2,i);

}

else{

int t=maxn/ha;

if(gcd(t,ha)==x0&&lcm(t,ha)==y0){

++tot;

}

}

}

int main(){

cin>>x0>>y0;

maxn=x0*y0;

aver=maxn/2;

dfs(1,0);

cout<<tot;

return 0;

}
/*
//如何写一份可以提交的代码？以P1000 A+B为例
#include <iostream>
using namespace std;
int main()
{
    int a, b; //定义两个变量名
    cin >> a >> b; //从标准输入流中输入两个整数
    cout << a + b << endl; //输出到标准输出流中

}
// 完成程序以后，点击下方的提交，即可看到测试结果
*/
