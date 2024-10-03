#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    int s=0,x=0;
    cin>>s>>x;
    int l=7;       //小鱼当前的速度
    int mile=0;   //小鱼当前的位置
    while(mile<s)
    {
        mile+=l;
        l*=0.98;
        if(l<1) break;
    }
    int d=s+x-mile;
    if(s+x==mile) cout<<"n";
    if(d<=0) cout<<"n";   //不用游下一步就已经游在了范围之外
    if(d>0&&d>l) cout<<"y";   //下一秒仍然在范围内
    return 0;
}
