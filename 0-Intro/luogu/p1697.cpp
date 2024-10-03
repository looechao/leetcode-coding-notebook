#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<limits>
using namespace std;

int main()
{
    int n;  //输入区间的个数
    cin>>n;
    int max=0;
    int count=1;
    int p=1;
    vector<int> bt(2*n+1,0);
    while(count<=n)
    {
        int a=0,b=0;
        cin>>a>>b;
        bt[p]=a;
        bt[p+1]=b;
        p+=2;
        count++;
    }
    for(int i=1;i<2*n;i+=2)
    {
        vector<int> num(1000,0);  //整体区间
        vector<int> newbt(bt);
        newbt[i]=0;
        newbt[i+1]=0;
        for(int j=1;j<=2*n;j+=2)
        {
            if(newbt[j]!=bt[j+1]&&newbt[j]!=0&&newbt[j+1]!=0)
            for(int k=newbt[j];k<newbt[j+1];k++)
            {
                num[k]=1;
            }
        }
        int sum=0;
        for(int m=0;m<num.size();m++)
        {
            if(num[m]==1) sum++;
        }
        if(sum>max) max=sum;
    }
    cout<<max;
}
