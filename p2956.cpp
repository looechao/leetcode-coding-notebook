#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int sum,a,b,n;

int main()
{
    int p=1;
    cin>>b>>a>>n;
    int squre[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            squre[i][j]=0;
        }
    }
    while(p<=n)
    {
        int x=0,y=0,x1=0,y1=0;
        cin>>x>>y>>x1>>y1;
        for(int i=x-1;i<=x1-1;i++)
        {
            for(int j=y-1;j<=y1-1;j++)
            {
                squre[j][i]=1;
            }
        }
        p++;
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(squre[i][j]==1) sum++;
        }
    }
    cout<<sum;
    return 0;
}
