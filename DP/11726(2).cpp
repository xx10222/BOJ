#include <iostream>
#define MAX 1001
using namespace std;

int d[MAX];

int go(int n){
    if(d[n]!=0) return d[n];
    d[n]=(go(n-1)+go(n-2))%10007;
    return d[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    d[0]=0;
    d[1]=1;
    d[2]=2;
    printf("%d\n", go(n));

    return 0;
}
