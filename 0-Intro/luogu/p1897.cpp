#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<numeric>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;

int p; //电梯开门的次数

int main()
{
    long long n;
    cin>>n;
    vector<long long> num(n,0);
    for(long long i=0;i<num.size();i++)
    {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    vector<long long> door(num[n-1]+1,0);
    for(long long i=0;i<=num[n-1];i++)
    {
        for(long long j=0;j<num.size();j++)
        {
            if(num[j]==i) door[i]=1;
        }
    }
    for(long long i=0;i<=num[n-1];i++)
    {
        if(door[i]==1) p++;
    }
    cout<<n+p*5+num[n-1]*(6+4);
    return 0;
}
