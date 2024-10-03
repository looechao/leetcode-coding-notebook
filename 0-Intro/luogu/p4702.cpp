#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

long long sum,n,a,b;

int main()
{
    cin>>n;
    bool alice=true;
    vector<long long> num(n+1,0);
    for(long long i=1;i<=n;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    if(!(sum&1)) cout<<"Bob";
    else cout<<"Alice";
    return 0;
}
