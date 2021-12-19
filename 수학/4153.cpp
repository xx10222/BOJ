#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int arr[3]={0};
        int max = -1, index;
        int x=0,y=0;
        
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        
        if(arr[0]==0&&arr[1]==0&&arr[2]==0)
        {
            break;
        }
        
        for(int i=0;i<3;i++)
        {
            if(max<arr[i])
            {
                index=i;
                max=arr[i];
            }
        }
        
        for(int i=0;i<3;i++)
        {
            if(i==index)
            {
                y=max*max;
            }
            else 
            {
                x+=(arr[i]*arr[i]);
            }
        }
        if(x==y)
        {
            cout<<"right"<<'\n';
        }
        else
        {
            cout<<"wrong"<<'\n';
        }
        
    }

    return 0;
}
