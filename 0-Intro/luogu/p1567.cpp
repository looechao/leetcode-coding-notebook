#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n=0;
    int count=1;
    int max=0;
    int p=1;
    cin>>n;
    vector<int> num(n,0);
    for(int i=0;i<n;i++) //读入每天的最高气温
    {
        cin>>num[i];
    }
    while(p<n)
    {
        if(num[p]>num[p-1]) count++;
        else count=1;
        if(count>max) max=count;
        p++;
    }
    cout<<max;
}
