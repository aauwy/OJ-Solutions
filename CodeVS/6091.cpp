/*
作者:方舟
题目:p6091 [JL]Teacher Egg的游戏
*/
#include<stdio.h>

 #include<algorithm>

 #include<string.h>

 using namespace std;

 const int maxn=100;

 const int maxm=100;

 const int maxl=51;

 int N,M;

 int a[maxn];

 int DP[maxn][maxm][maxl];

 int ys[maxn][maxl];

 int ans[maxl];

 int tmp[maxl];

 void Multi(int *x,int *y,int z)

 {

     memset(tmp,0,sizeof(tmp));

     tmp[0]=y[0];

     for(int i=1;i<=tmp[0];i++)

     {

         tmp[i]=y[i]*z;

     }

     for(int i=1;i<=tmp[0];i++)

     {

         tmp[i+1]+=tmp[i]/100000;

         tmp[i]%=100000;

     }

     while(tmp[tmp[0]+1])

     {

         tmp[0]++;

         tmp[tmp[0]+1]+=tmp[tmp[0]]/100000;

         tmp[tmp[0]]%=100000;

     }

     for(int i=0;i<30;i++)x[i]=tmp[i];

     return ;

 }

 void Add(int *x,int *y,int *z)

 {

     memset(tmp,0,sizeof(tmp));

     if(y[0]>z[0])tmp[0]=y[0];

     else tmp[0]=z[0];

     for(int i=1;i<=tmp[0];i++)

     {

         tmp[i]=y[i]+z[i];

     }

     for(int i=1;i<=tmp[0];i++)

     {

         tmp[i+1]+=tmp[i]/100000;

         tmp[i]%=100000;

     }

     if(tmp[tmp[0]+1])tmp[0]++;

     for(int i=0;i<30;i++)x[i]=tmp[i];

     return ;

 }

 bool Max(int *x,int *y)

 {

     if(x[0]>y[0])return 1;

     else if(y[0]>x[0])return 0;

     else 

     {

         for(int i=x[0];i>=1;i--)

         {

             if(x[i]>y[i])return 1;

             else if(x[i]<y[i])return 0;

         }

     }

     return 1;

 }

 int main()

 {

     scanf("%d %d",&N,&M);

     ys[0][0]=1;

     ys[0][1]=1;

     for(int i=1;i<=M;i++)

     {

         Multi(ys[i],ys[i-1],2);

     }

     ans[0]=1;ans[1]=0;

     for(int i=1;i<=N;i++)

     {

         for(int j=1;j<=M;j++)

         {

             scanf("%d",&a[j]);

             Multi(DP[j][j],ys[M],a[j]);

         }

         for(int k=2;k<=M;k++)

         {

             for(int x=1;x<=M-k+1;x++)

             {

                 int y=x+k-1;

                 int xm[31],ym[31],cm[31];

                 Multi(cm,ys[M-k+1],a[x]);

                 Add(xm,cm,DP[x+1][y]);

                 Multi(cm,ys[M-k+1],a[y]);

                 Add(ym,cm,DP[x][y-1]);

                 if(Max(xm,ym))

                 {

                     memcpy(DP[x][y],xm,sizeof(int)*30);

                 }

                else 

                {

                    memcpy(DP[x][y],ym,sizeof(int)*30);

                }

            }

        }

        Add(ans,ans,DP[1][M]);

    }

    printf("%d",ans[ans[0]]);

    for(int i=ans[0]-1;i>=1;i--)

    {

        printf("%05d",ans[i]);

    }

    printf("\n");

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
