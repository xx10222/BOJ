#include <iostream>
#include <stdio.h>
#define MAX 1000000
using namespace std;

//Top-down : 재귀함수 활용
int d[MAX];
int go(int n) {
    if(n==1) return 0;
    if(d[n]>0) return d[n];
    d[n] = go(n-1)+1;
    if(n%2==0 && d[n]>go(n/2)+1)
    {
        d[n]=go(n/2)+1;
    }
    if(n%3==0 && d[n]>go(n/3)+1)
    {
        d[n]=go(n/3)+1;
    }
    return d[n];
}
int main()
{
    int n;
    d[MAX]={0, };
    cin >> n;
    printf("%d\n",go(n));
    return 0;
}
