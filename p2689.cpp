#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int x,y,x2,y2,n;
int a1,a2,b1,b2;

int main()
{
    int sum=0;
    cin>>x>>y;
    cin>>x2>>y2;
    cin>>n;
    vector<char> wind(n,' ');
    for(int i=0;i<n;i++)
    {
        cin>>wind[i];
        if(wind[i]=='E') a1++;
        if(wind[i]=='N') b1++;
        if(wind[i]=='W') a2++;
        if(wind[i]=='S') b2++;
    }
    int d1=x2-x;
    int d2=y2-y;
    if(d1>=0)
    {
        if(a1>=d1) sum+=d1;
        else {cout<<-1;return 0;}
    }
    if(d1<0)
    {
        if(a2>=-d1) sum+=-d1;
        else {cout<<-1;return 0;}
    }
    if(d2>=0)
    {
        if(b1>=d2) sum+=d2;
        else {cout<<-1;return 0;}
    }
    if(d2<0)
    {
        if(b2>=-d2) sum+=-d2;
        else {cout<<-1;return 0;}
    }
    cout<<sum;
    return 0;
}
