#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int n=0;
    int count=0;  //洼地数量统计
    cin>>n;
    vector<int> num(n,0);
    for(int i=0;i<n;i++)   //输入数组
    {
        cin>>num[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(num[i]-num[i-1]<0&&num[i]-num[i+1]<=0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
