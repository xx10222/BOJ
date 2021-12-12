#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int arr[26]={0};
    int max=0, max_index;
    int count=0; //최대 사용 문자가 한 개인지
    cin>>str;
    
    
    //대문자 : 65-90, 소문자 : 97-122
    for(int i=0;i<str.length();i++)
    {
        int n=str[i];
        if(str[i]<97) //대문자
        {
            arr[n-65]++;
        }
        else //소문자
        {
            arr[n-97]++;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
    }
    
    for(int i=0;i<26;i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }

    if(count>1)
    {
        cout<<"?";
    }
    else
    {
        cout<<(char)(max_index+65);
    }
    return 0;
}
