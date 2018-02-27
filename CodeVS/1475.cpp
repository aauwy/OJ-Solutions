/*
作者:方舟MinecraftFuns
题目:p1475 m进制转十进制
*/
#include <bits/stdc++.h>
using namespace std;
int m;
char s[105];
int main(int argc, char const *argv[])
{
cin>>s>>m;
cout<<strtol(s,NULL,m)<<endl;//库函数大法好
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
