#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int x=0,n=0;
    int sum=0;
    int day=0;
    int count=0;
    cin>>x>>n;
    while(count<n)
    {
        day = x%7;
        if(day!=6&&day!=0)
        {
            sum+=250;
        }
        count++;
        x++;
    }
    cout<<sum;
    return 0;
}
