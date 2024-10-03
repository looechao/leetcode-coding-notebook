#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n=0,l=0,r=0; //数组长度，范围起点和范围终点
    int count=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        string str = to_string(i);  //将整型数字转换成字符串
        n=str.size(); //获得字符串的长度，方便划分子串
        for(int i=0;i<n;i++)
        {
            if(str.substr(i,1)=="2")  //遍历字串内2的个数
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
