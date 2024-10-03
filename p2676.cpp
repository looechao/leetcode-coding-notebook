#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int n,b;

int main()
{
    int sum=0;
    int p=0;
    cin>>n>>b;
    vector<int> num(n,0);
    for(int i=0;i<num.size();i++)
    {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    for(int i=num.size()-1;i>=0;i--)
    {
        sum+=num[i];
        p++;
        if(sum>=b) break;
    }
    cout<<p;
}
