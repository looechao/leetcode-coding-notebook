#include<iostream>
#include<stdio.h>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int p=0;
    int n;
    int max=0;  //存放最大连号
    int count=1; //计数
    cin>>n;
    vector<int> num(n,0); //初始化数组
    for(int i=0;i<n;i++)   //将元素存入数组
    {
        cin>>num[i];
    }
    while(p<n)    //p用作指针用于移动
    {
        if(num[p]+1==num[p+1])
        {
            p++;
            count++;
        }
        else
        {
            if(count>=max) max=count;   //连号断了，初始化
            count=1;  //重置count的数值
            p++;
        }
    }
    cout<<max;
    return 0;
}
