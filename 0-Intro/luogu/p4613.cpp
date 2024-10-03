#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

long long n,sum,sum1;

int main()
{
    cin>>n;
    vector<long long> num(n,0);
    vector<long long> num1(n,0);
    for(long long i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin>>num1[i];
    }
    sort(num.begin(),num.end());
    sort(num1.begin(),num1.end());
    for(long long i=0;i<n;i++)
    {
        if(num[i]>num1[i]) {cout<<"NE"; return 0;}
    }
    cout<<"DA";
    return 0;
}
