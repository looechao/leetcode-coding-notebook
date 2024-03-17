#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits>
using namespace std;

int main()
{
    int n;
    int min=numeric_limits<int>::max();
    cin>>n;
    vector<int> num(7,0);
    for(int i=1;i<7;i++)
    {
        cin>>num[i];
    }
    for(int i=1;i<=6;i++)
    {
        if(i==1)
        {
            for(int j=1; ;j++)
            {
                int sum=j*num[1];
                if(sum>=n)
                {
                    if(j*num[2]<=min) min=j*num[2];
                    break;
                }
            }
        }
        if(i==2)
        {
            for(int j=1; ;j++)
            {
                int sum=j*num[3];
                if(sum>=n)
                {
                    if(j*num[4]<=min) min=j*num[4];
                    break;
                }
            }
        }
        if(i==3)
        {
            for(int j=1; ;j++)
            {
                int sum=j*num[5];
                if(sum>=n)
                {
                    if(j*num[6]<=min) min=j*num[6];
                    break;
                }
            }
        }
    }
    cout<<min;
    return 0;
}
