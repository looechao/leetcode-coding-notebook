#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int r,b,c,d,e,k,sum;

int main()
{
    cin>>r>>b>>c>>d>>e;
    if(r>b) k=1;
    else k=0;
    if(c+d>e+e) sum=r*c+b*d;
    else
    {
        if(k==1) //红球比蓝球多
            sum=b*2*e+(r-b)*c;
        else sum=r*2*e+(b-r)*d;
    }
    cout<<sum;
    return 0;
}
