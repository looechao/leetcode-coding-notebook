#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int n; //读入数据组数
    cin>>n;
    int p = 0;
    vector<int> stats(n,0);
    while(p< n)
    {
        long long a=0,b=0;
        cin>>a>>b;
        long long sum=b*(1+b)/2;
        if(b==1) stats[p]=1;
        if(a>=sum) stats[p]=1;
        p++;
    }
    for(int i=0;i<n;i++)
    {
        if(stats[i]==1)
            cout<<"Yes";
        else
            cout<<"No";
        if(i!=n-1)  cout<<endl;
    }
}
