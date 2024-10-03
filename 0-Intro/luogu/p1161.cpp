#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;  //输入操作轮数
    double a=0;
    int a1=0;
    int t=0;
    int l=2000000;
    vector<int> num(l,0);  //存放每个灯的状态信息
    for(int i=0;i<n;i++)
    {
        cin>>a>>t;    //输入a和t
        for(int i=1;i<=t;i++)   //for循环数组中进行每轮操作
        {
            a1=static_cast<int>(floor(a*i));
            num[a1]+=1;
        }
    }
    for(int i=0;i<l;i++)  //遍历所有灯的状态信息，找出操作次数为基数的
    {
        if(num[i]%2!=0)
        {
            cout<<i;
        }
    }
    return 0;
}
