#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    string a="0";
    string b="0";
    int q=0,w=0,e=0,r=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a.at(i)=='/')
        {
            q=stoi(a.substr(0,i));
            w=stoi(a.substr(i+1,a.size()-i));
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b.at(i)=='/')
        {
            e=stoi(b.substr(0,i));
            r=stoi(b.substr(i+1,b.size()-i));
        }
    }
    int n=__gcd(q*e,w*r);  //求得最大公约数
    int a1=(q*e)/n;
    int b1=(w*r)/n;
    cout<<b1<<" "<<a1;
}
