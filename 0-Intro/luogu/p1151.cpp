#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<math.h>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int flag=0;
    int k=0;
    cin>>k;
    for(int i=10000;i<=30000;i++)
    {
        string str=to_string(i);   //整型转字符串后划分
        string a=str.substr(0,3);
        string b=str.substr(1,3);
        string c=str.substr(2,3);
        int a1=stoi(a);   //划分完成后在转回整型
        int b1=stoi(b);
        int c1=stoi(c);
        int x=a1%k;
        int y=b1%k;
        int z=c1%k;
        if(x==0&&y==0&&z==0)
        {
            flag=1;
            cout<<i<<endl;
        }
    }
    if(flag==0)
    {
        cout<<"No"<<endl;
    }
}
