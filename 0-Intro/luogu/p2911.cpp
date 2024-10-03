#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int a,b,c,sum;

int main()
{
    cin>>a>>b>>c;
    int x=a+b+c;  //最大的和值
    vector<int> num(x+1,0);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                int s=i+j+k;
                num[s]++;
            }
        }
    }
    auto maxelement=max_element(num.begin(),num.end());
    int d=distance(num.begin(),maxelement);
    cout<<d;
    return 0;
}
