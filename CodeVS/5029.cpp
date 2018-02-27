/*
作者:方舟
题目:p5029 [JL] 啦啦啦啦啦啦，我是信息课代表
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    istream_iterator<int>in(cin), eof;
    ++in;
    cout << accumulate(in, eof, 0);
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
