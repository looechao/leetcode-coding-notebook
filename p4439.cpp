#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

int n,sum=1;

int main()
{
    cin>>n;
    char last='0';
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(i==0) {last=c; sum++;}
        else
        {
            if(last!=c) {sum++; last=c;}
        }
    }
    cout<<sum;
    return 0;
}
