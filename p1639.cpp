#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<limits>
using namespace std;

int main()
{
    int a=0,b=0,x=0,y=0;  //定义起止点和瞬间传送点
    int min=numeric_limits<int>::max();
    vector<int> num(3,0);
    int count=0;
    cin>>a>>b>>x>>y;
    num[0]=abs(b-a);
    num[1]=abs(a-x)+abs(b-y);
    num[2]=abs(a-y)+abs(b-x);
    for(int i=0;i<3;i++)
    {
        if(num[i]<min) min=num[i];
    }
    cout<<min;
}
