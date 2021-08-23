#include <iostream>
#include <stdio.h>
#define MAX 1000000
using namespace std;

//Bottom-up
int main()
{
    int n;
    int d[MAX];
    cin >> n;
    d[1]=0;
    for(int i=2;i<=n;i++)
    {
        d[i]=d[i-1]+1; //1씩 감소(기본값)
        if(d[i]>d[i/2]+1 && i%2==0)
        {
            d[i]=d[i/2]+1;
        }
        if(d[i]>d[i/3]+1 && i%3==0)
        {
            d[i]=d[i/3]+1;
        }
    }
    printf("%d\n", d[n]);
    return 0;
}
