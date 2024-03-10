#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int x=0,n=0;
    int sum=0;    //计算公里和
    int day=0;    //存放周x
    int count=0;  //循环次数计数
    cin>>x>>n;
    while(count<n)
    {
        day = x%7;   //获取日期
        if(day!=6&&day!=0)  //判断是否是周六日
        {
            sum+=250;
        }
        count++;
        x++;
    }
    cout<<sum;
    return 0;
}
