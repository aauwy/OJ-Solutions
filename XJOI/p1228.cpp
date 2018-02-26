#include <bits/stdc++.h>
#define QAQ int
#define TAT long long
#define ORZ double
#define OwO bool
#define SHO short
#define F(i,j,n) for(QAQ i=j;i<=n;++i)
#define E(i,j,n) for(QAQ i=j;i>=n;--i)
#define MES(i,j) memset(i,j,sizeof(i))
#define MEC(i,j) memcpy(i,j,sizeof(j))
using namespace std;
QAQ n,a[20];
QAQ ed,ans;
void dfs(QAQ down,QAQ ld,QAQ rd,QAQ h){
    if(down==ed) ans++;
    else {
        QAQ pos=ed&(~(down|ld|rd))&(~a[h]);
        while(pos){
            QAQ p=pos&-pos;
            pos-=p;
            dfs(down+p,ld+p<<1,rd+p>>1,h+1);
        }
    }
}
QAQ main(){
    scanf("%d",&n);
    ed=(1<<n)-1;
    F(i,1,n) F(j,1,n) {
        a[i]<<=1;
        char x;cin>>x;
        if(x=='.') a[i]+=1;
    }
    dfs(0,0,0,1);
    printf("%d\n",ans);
    return 0;
}
