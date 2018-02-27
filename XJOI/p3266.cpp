#include <iostream> 
using namespace std;

int main() 
{ 
    unsigned long long table[51] = {0,3,6,6}; 
    int n = 0; 
    for(int i=4;i<=50;i++) 
    { 
        table[i] = table[i-1]+2*table[i-2]; 
    }

    while(cin>>n) 
        cout<<table[n]<<endl;

    return 0; 
}
