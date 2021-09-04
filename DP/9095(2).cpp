#include <iostream>
#include <stdio.h>
#define MAX 12

int d[12];

using namespace std;

int go(int n)
{
    if(d[n]!=0) return d[n];
    d[n]=go(n-1)+go(n-2)+go(n-3);
    return d[n];
}

int main()
{
    //Top-down
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
        printf("%d\n",go(n[j]));
    }

    return 0;
}
