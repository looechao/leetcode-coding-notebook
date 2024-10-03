#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int k;

int main()
{
    long long sum=0;
    long long n=1;
    long long days=0;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        sum+=n;
        days++;
        if(days==n) {n++;days=0;}
    }
    cout<<sum;
    return 0;
}
