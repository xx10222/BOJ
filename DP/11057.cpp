#include <iostream>
#include <stdio.h>
#define MAX 1001
#define mod 10007

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
    
    for(int i=0;i<=9;i++)
    {
        d[0][i]=0;
        d[1][i]=1;
    }
    
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=9;j++)
        {
            d[i][j]=0;
            for(int k=0;k<=j;k++)
            {
                d[i][j] += d[i-1][j-k];
                
            }
            d[i][j]%=mod;
        }
    }
    
    for(int i=0;i<=9;i++)
    {
        res+=d[n][i];
    }
    res%=mod;
    
    printf("%lld\n",res);
    
    return 0;
}
