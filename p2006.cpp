#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;

long long k,m,n;

int main()
{
    cin>>k>>m>>n;
    int kill=-1;
    int count=1;
    vector<long long> skill(m+1,0);
    while(count<=m)
    {
        long long a=0,b=0;
        cin>>a>>b;
        long long life=k;
        long long boss=n;
        if(a!=0)
        {
            int times=life/a;
            boss-=times*b;
        }
        else boss=0;
        if(boss<=0) {skill[count]=1;kill=1;}
        count++;
    }
    if(kill==1)
    {
        for(int i=1;i<=m;i++)
        {
            if(skill[i]==1) cout<<i<<" ";
        }
    }
    else cout<<kill;
    return 0;
}
