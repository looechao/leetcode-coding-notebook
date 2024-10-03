#include<iostream>
#include<string>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n=0;  //输入n
    int sad=0; //不高兴程度
    int a=0,b=0; //课内外的上课时长
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)  //计算n天后结束后的不高兴程度
    {
        cin>>a>>b;
        sad+=a+b-8;  //计算当天的不高兴程度
        sum+=sad; //计算每天的不高兴程度的和
    }
    cout<<sum;
    return 0;
}
