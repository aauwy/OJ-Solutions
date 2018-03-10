#include<iostream>
#include<stdlib.h>
int t;
using namespace std;
 
void Move(char x,char y)
{
    cout<<x<<"->"<<y<<endl;
    t++;
}
 
void Hannoi(int n,char a,char b,char c)
{
    if(n == 1)
        Move(a,b);
    else
    {
        Hannoi(n-1,a,c,b);  
        Move(a,b);
        Hannoi(n-1,c,b,a);   
    }
}
 
int main()
{
    int n;
    t=0;
    cin>>n;
    Hannoi(n,'1','3','2');
    //system("pause");
    cout<<"tot="<<t;
    return 0;
}
