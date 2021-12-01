#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0; //동전 개수
    int coinArr[6]={500,100,50,10,5,1};
    
    cin>>n;
    n=1000-n;
    
    for(int coin : coinArr)
    {
        count+=(n/coin);
        n%=coin;
    }
    cout<<count;
    return 0;
}
