#include <iostream>
#include <stdio.h>
#define MAX 1001
using namespace std;
int d[MAX];

int go(int n) {
    if(d[n] != 0) return d[n];
    d[n] = (go(n-1) + 2*go(n-2))%10007;
    return d[n];
}

int main() 
{
    //Bottom-up
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin>>n;
    
    d[0]=0;
    d[1]=1;
    d[2]=3;
    
    go(n);
    
    printf("%d\n", d[n]);

    return 0;
}
