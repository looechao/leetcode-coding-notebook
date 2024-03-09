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
    int n=0;
    cin>>n;
    bool flag=false;
    int input=0;
    int p=0;
    int count=0;
    int num[n*n];  //创建存放矩阵元素的一维数组
    while(cin>>input)
    {
        int i=p;
        for(i;i<p+input;i++)
            num[i]=flag;
        p=p+input;
        flag=!flag;
        if(p==n*n) break;
    }
    for(int i=0;i<n*n;i++)
    {
        cout<<num[i];
        count++;
        if(count!=n*n&&count%n==0)
        {
            cout<<endl;
        }
    }
    return 0;
}
