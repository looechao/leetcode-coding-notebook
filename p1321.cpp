#include<iostream>
#include<string>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int count1=0;
    int count2=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size()-2;i++)
    {
        if(str[i]=='b'||str[i+1]=='o'||str[i+2]=='y')
        {
            count1++;
        }
    }
    for(int i=0;i<str.size()-3;i++)
    {
        if(str[i]=='g'||str[i+1]=='i'||str[i+2]=='r'||str.at(i+3)=='l')
        {
            count2++;
        }

    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    return 0;
}
