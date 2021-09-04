#include <iostream>
#include <stdio.h>
#define MAX 100001
#define rem 1000000009

long long d[MAX][4];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    d[0][1] = 0;
    d[0][2] = 0;
    d[0][3] = 0;
    
    d[1][1]=1;
    d[1][2]=0;
    d[1][3]=0;
    
    d[2][1]=0;
    d[2][2]=1;
    d[2][3]=0;
    
    d[3][1]=1;
    d[3][2]=1;
    d[3][3]=1;
    
    for(int k=4;k<MAX;k++)
    {
        d[k][1]=(d[k-1][2]+d[k-1][3])%rem;
        d[k][2]=(d[k-2][1]+d[k-2][3])%rem;
        d[k][3]=(d[k-3][1]+d[k-3][2])%rem;
    }
    
    int n, t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        printf("%d\n",(d[n][1]+d[n][2]+d[n][3])%rem);
    }
    
    
    return 0;
}
