#include <iostream>
#include <stdio.h>
#define MAX 91

long long d[MAX][2];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin>>n;
    
    d[0][0]=0;
    d[0][1]=0;
    d[1][0]=0;
    d[1][1]=1;
    d[2][0]=1;
    d[2][1]=0;
    d[3][0]=1;
    d[3][1]=1;
    
    for(int i=4;i<=n;i++)
    {
        d[i][0]=d[i-1][0]+d[i-1][1];
        d[i][1]=d[i-1][0];
    }
    
    printf("%lld\n",d[n][0]+d[n][1]);
    
    
    return 0;
}
