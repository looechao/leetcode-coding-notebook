#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    vector<int> num(100,1);
    int input=1;
    int p=0;
    while(cin>>input)
    {
        if(input==0) break;
        num[p]=input;
        p++;
    }
    for(int i=p-1;i>=0;i--)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
