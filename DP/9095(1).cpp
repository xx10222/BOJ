#include <iostream>
#include <stdio.h>
#define MAX 12

int d[12];

using namespace std;

int main()
{
    ///bottom-up
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    int n[100];
    int res[100];
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
    }
    
    d[0]=0;
    d[1]=1;
    d[2]=2;
    d[3]=4;
    
    for(int j=0;j<t;j++)
    {
        for(int i=4;i<=n[j];i++)
        {
            if(d[i]!=0) continue;
            d[i]=d[i-1]+d[i-2]+d[i-3];
        }
    }

    
    for(int i=0;i<t;i++)
    {
        printf("%d\n",d[n[i]]);
    }

    return 0;
}
