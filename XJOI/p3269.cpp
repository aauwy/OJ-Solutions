#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
int main()
{
    LL m,n,base1,base2;
    base1=base2=1;
    cin>>m>>n;
    m=m-1;n=n-1;
    for(LL i=m-n+1;i<=m;i++)
    {
        base1=base1*i;
    }
    for(LL i=1;i<=n;i++)
    {
        base2=base2*i;
    }
    cout<<(base1/base2);
    return 0;
}
