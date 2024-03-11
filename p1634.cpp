#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    int x=0,n=0;
    cin>>x>>n;
    long long sum=1;
    int count=0;
    while(count<n)
    {
        sum+=sum*x;
        count++;
    }
    cout<<sum;
    return 0;
}
