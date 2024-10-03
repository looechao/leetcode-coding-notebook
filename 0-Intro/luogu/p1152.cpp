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
    vector<int> flag(n,0);   //初始化flag和num动态数组
    vector<int> num(n,0);

    for(int i=0;i<n;i++)  //输入num数组
    {
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++)    //判断差值是否在数组内
    {
        int diff=abs(num[i+1]-num[i]);
        //增加一个防止越界访问的判读
        if(diff>n)
        {
            cout<<"Not jolly";
            return 0;
        }
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
