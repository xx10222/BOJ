#include <iostream>
#define MAX 1001

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    int d[MAX]={0, };
    cin >> n;
    d[0]=0;
    d[1]=1;
    d[2]=2;
    
    for(int i=3; i<=n; i++)
    {
        d[i] = (d[i-1] + d[i-2])%10007;
    }
    
    printf("%d\n",d[n]%10007);

    return 0;
}
