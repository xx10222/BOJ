#include <iostream>
#include <stdio.h>
#define MAX 1001
using namespace std;

int main() 
{
    //Bottom-up
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int d[MAX] = {0, };
    cin>>n;
    
    d[0]=0;
    d[1]=1;
    d[2]=3;
    
    for(int i=3;i<=n;i++)
    {
        d[i] = (d[i-1] + 2*d[i-2]) % 10007;
        
    }
    printf("%d\n", d[n]);

    return 0;
}
