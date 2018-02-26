#include<bits/stdc++.h>
//#include<cstdio>
//#include<math.h>
//#include<string.h>
//#include<algorithm>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const double eps=1e-5;
const double pi=acos(-1.0);
const int mod=1e8+7;
const LL INF=0x3f3f3f3f;

const int N=1e3+10;
int dp[N];
int a[55];
int b[55];

int main()
{
    int t,i,k,j,n;
    int c,g;
    int cas=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            scanf("%d",&b[i]);
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=1;i<=n;i++)
            for(j=k;j>=0;j--)
                for(c=1;c<=b[i];c++)
                if((j-c*a[i])>=0){
                    dp[j]+=dp[j-c*a[i]];
                    dp[j]%=mod;
                }
        printf("Case %d: %d\n",cas++,dp[k]);
    }
}
