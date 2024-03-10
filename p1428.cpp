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
    int n; //鱼的个数
    cin>>n;
    vector<int> num(n,0);
    vector<int> num1(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    num1[0]=0;
    for(int i=1;i<n;i++)    //遍历除了第一只以外的每一只小鱼
    {   int count=0;
        for(int j=0;j<i;j++)   //将该之前的鱼的颜值与自己的作比较
        {
            if(num[j]<num[i]) count++;
        }
        num1[i]=count;
    }
    for(int i=0;i<n;i++)   //输出
    {
        cout<<num1[i]<<" ";
    }
}
