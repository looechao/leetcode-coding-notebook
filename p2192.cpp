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
    int n=0;
    int num0=0,num5=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==5) num5++;
        if(a==0) num0++;
    }
    if(num0==0) cout<<-1;
    else
    {
        if(num5>=9)
        {
            for(int i=1;i<=num5/9*9;i++)
                cout<<5;
            for(int i=1;i<=num0;i++)
                cout<<0;
        }
        else
            cout<<0;
    }
    return 0;
}
