#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;

int num[10001]={0};
int main()
{
    int n=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int i2=i;
        for(int j=2;j<=i;j++)
            {while(i2%j==0) {num[j]++;i2/=j;}}
    }
    for(int i=1;i<=10000;i++)
    {
        if(num[i]!=0)
            cout<<i<<" "<<num[i]<<endl;
    }
    return 0;
}
