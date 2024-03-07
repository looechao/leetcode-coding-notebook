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
    int count=0;
    int i=1;
    cin>>n;
    vector<int> num(n,0);
    for(int i=0;i<n;i++)   //输入数组
    {
        cin>>num[i];
    }
    while(i>=1&&i<n-1)    //改用while循环
    {
        if(num[i]-num[i-1]<0&&num[i]-num[i+1]<0)    //该点左高右高，是典型的洼地
        {
            count++;
        }
        if(num[i]-num[i-1]<0&&num[i]-num[i+1]==0)  //左高右平地，将标记向不断向右边移动
        {
            for(int j=i+2;j<n;j++)
            {
                if(num[j]-num[j-1]>0)
                {
                    count++;
                    i=j;
                    break;
                }
            }
        }
        i++;
    }
    cout<<count;
    return 0;
}
