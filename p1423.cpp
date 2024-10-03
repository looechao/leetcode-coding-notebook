#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    double s=0; //需要游的距离
    double d=2;  //第一步能游泳的距离
    double sum=0; //记录已经游的距离
    int count=0; //记录步数
    cin>>s;
    while(sum<s)
    {
        sum+=d;
        d*=0.98;
        count++;
    }
    cout<<count;
    return 0;
}
