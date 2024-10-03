#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<numeric>
using namespace std;

int main()
{
    vector<long long> num(3,0);
    for(int i=0;i<num.size();i++)
    {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    int x=__gcd(num[0],num[2]);
    cout<<num[0]/x<<"/"<<num[2]/x;
    return 0;
}
