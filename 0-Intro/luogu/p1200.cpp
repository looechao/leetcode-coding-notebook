#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    string group;     //小组的字符串
    string star;      //彗星的字符串
    int sum1=1,sum2=1;   //存放乘积
    cin>>group>>star;
    for(int i=0;i<group.size();i++)  //拆分并计算小组的字母乘积
    {
        int num=group.at(i)-'A'+1;
        sum1*=num;
    }
    for(int i=0;i<star.size();i++)  //拆分并计算彗星的字母乘积
    {
        int num=star.at(i)-'A'+1;
        sum2*=num;
    }
        if(sum1%47==sum2%47)   //判定去留
    {
        cout<<"GO";
    }
    else cout<<"STAY";
    return 0;
}
