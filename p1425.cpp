#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int h=0,m=0,a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    if(d>=b)
    {
        h=c-a;
        m=d-b;
        cout<<h<<" "<<m;
    }
    else
    {
        h=c-a-1;
        m=60+d-b;
        cout<<h<<" "<<m;

    }
    return 0;
}
