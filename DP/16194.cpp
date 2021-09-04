#include <iostream>
#include <stdio.h>
#define MAX 1001

int d[MAX];
int p[MAX];

using namespace std;

int main()
{
    ///bottom-up
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int res=0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    
    d[0]=0;
    d[1]=p[1];
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            res=p[j]+d[i-j];
            if(d[i]==0) d[i]=res;
            else if(res<d[i]) d[i]=res;
        }
    }
    printf("%d\n",d[n]);
    return 0;
}
