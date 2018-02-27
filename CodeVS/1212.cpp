/*
作者:方舟
题目:p1212 最大公约数
*/
#include<string>

#include<iostream>

#include<cmath>

#include<cstdio>

#include<algorithm>

using namespace std;

int swap(int &a,int &b)

 {int c;  if(a<b){c=b;b=a;a=c;}}

int main()

{

int a,b,c;

cin>>a>>b;

if(a<b) swap(a,b);

for( ; ; )

{

c=a%b;

if(c==0) break;

a=b;b=c;

}

cout<<b;

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
