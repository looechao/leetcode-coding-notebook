#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int n=0,m=0;
    cin>>n>>m;
    int count1=0,count2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i+1;k<=m;k++)
            {
                for(int l=j+1;l<=n;l++)
                {
                    if(k-i==l-j)
                        count1++;   //正方形
                    else
                        count2++;   //长方形
                }
            }
        }
    }
    cout<<count1<<" "<<count2;
    return 0;
}
