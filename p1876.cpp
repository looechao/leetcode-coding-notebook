#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    long long n; //´æ·Ån
    cin>>n;
    for(long long i=1;i*i<=n;i++)
    {
        cout<<i*i<<" ";
    }
    return 0;
}
