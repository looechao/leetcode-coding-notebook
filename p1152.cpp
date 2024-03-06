#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    int n;
    int judge=0;
    cin>>n;
    int flag[n];
    for(int i=0;i<n;i++){   //存放数组内元素的标记
        flag[i]=0;
    }
    int num[n];
    for(int i=0;i<n;i++)  //输入数组
    {
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++)    //判断差值是否在数组内
    {
        int diff=abs(num[i+1]-num[i]);
        flag[diff]=1;   //在数组内，标记为1
    }
    for(int i=1;i<n;i++)
    {
        if(flag[i]==0)    //若有一个不在，则数组不是欢乐的跳
        {
            judge=1;
            break;
        }
    }
    if(judge==1)
    {
        cout<<"Not jolly";
    }
    else
    {
        cout<<"Jolly";
    }
    return 0;
}
