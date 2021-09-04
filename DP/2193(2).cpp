#include <iostream>
#include <stdio.h>
#define MAX 91

long long d[MAX];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin>>n;
    
    d[0]=0;
    d[1]=1;
    
    for(int i=2;i<=n;i++)
    {
        d[i]=d[i-1]+d[i-2];
    }
    
    printf("%lld\n",d[n]);
    
    
    return 0;
}
