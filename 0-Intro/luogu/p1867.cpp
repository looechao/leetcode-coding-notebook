#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<limits>
using namespace std;
int sum;

int main()
{
    int n; //操作个数
    double a=0,b=0; //每次操作的消耗和获得的经验
    int p=1; //第几次操作
    double exp=0,level=0,life=10.00; //初始经验和生命值
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        life-=a;
        sum+=b;
        if(life<0) break;
        p++;
    }
    cout<<floor(log(sum+1)/log(2))<<" "<<sum+1-pow(2,floor(log(sum+1)/log(2)));
    return 0;
}
