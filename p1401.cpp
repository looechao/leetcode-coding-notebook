#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int x=0,y=0,a=0,b=0;
    long long x1=0,y1=0,a1=0,b1=0;
    cin>>x1>>y1;
    cin>>a1>>b1;
    x=x1;
    y=y1;
    a=a1;
    b=b1;
    if(x1*a1==x*a&&y1*a1==y*a&&x1*b1==x*b&&y1*b1==y*b)
    {
        cout<<"int";
    }
    else
        cout<<"long long int";
    return 0;
}
