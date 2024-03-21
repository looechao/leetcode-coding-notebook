#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

long long sum,n;

int main()
{
    cin>>n;
    vector<long long> num(n,0);
    for(long long i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(long long i=1;i<n;i++)
    {
        if(num[i]<num[i-1]) sum+=num[i-1];
        else sum+=num[i];
    }
    cout<<sum;
    return 0;
}
