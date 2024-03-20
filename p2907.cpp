#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,k,left;

int main()
{
    int f(int a);
    cin>>n>>k;
    cout<<f(n);
    return 0;
}

int f(int a)
{
    if((a-k)%2==0&&a-k>0)
        return f((a+k)/2)+f((a-k)/2);
    else return 1;
}
