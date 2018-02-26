/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t,sum=0,n=0;
	while (cin>>t)
	{
		n++;
		sum=sum+t;
	}
	long long ans;
	n--;
	ans=sum*(2^n);
	cout<<ans;
	return 0;
 }*/
#include <iostream>
using namespace std;
int main(){
    long long s=0,i,x,t=0;   
    while (cin>>x){
        t++;
        s+=x;
    }
    long long si;
    t--;
    si=s<<t;     
    cout<<si;
    return 0;
}
