#include <iostream>
#include <stdio.h>
#define MAX 101
#define mod 1000000000

long long d[MAX][10];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    long long res=0;
    cin >> n;
    
    d[1][0]=0;
    for(int i=1;i<=9;i++)
    {
        d[1][i]=1;
    }
    
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=9;j++)
        {
            d[i][j]=0;
            if(j+1<=9) d[i][j]+=d[i-1][j+1];
            if(j-1>=0) d[i][j]+=d[i-1][j-1];
            d[i][j]%=mod;
        }
    }
    
    for(int i=0;i<=9;i++) res+=d[n][i];
    printf("%lld\n",res%mod);
    
    return 0;
}
