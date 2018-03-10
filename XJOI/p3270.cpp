#include <iostream>
using namespace std ;
int main ()
{
    int a,b;
    cin>>a>>b;
    long long k=1;
    a=a+b;
    for(int i=1;i<b;i++)
    {
        a--;
        k=k*a/i;
    }
    cout<<k;
    return 0;
}
