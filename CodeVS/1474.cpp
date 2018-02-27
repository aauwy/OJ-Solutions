/*
作者:方舟
题目:p1474 十进制转m进制
*/
#include<cstdio>
const char base[]="0123456789ABCDEFG";
int main()
{
    int n,m; scanf("%d%d",&n,&m); char ans[100]=""; int now=99;
    while(n){ans[--now]=base[n%m];n/=m;}
    while(now<99) putchar(ans[now++]); putchar('\n');
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
