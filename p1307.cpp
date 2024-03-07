#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int num=0;  //存储字符
    cin>>num;
    int last=0;
    string str=to_string(num);
    last=str.size()-1;
    while(str.at(last)=='0'&&last>0)  //跳过倒置后数字最前端的零
    {
        last--;
    }
    if(str.at(0)=='-')    //负数的倒置
    {
        cout<<'-';
        for(int i=last;i>0;i--)
        {
            cout<<str.at(i);
        }
    }
    else
    {
        for(int i=last;i>=0;i--)
        {
            cout<<str.at(i);
        }
    }
     return 0;
}
