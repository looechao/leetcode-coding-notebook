#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int a=0,b=0;  //ÊäÈëaÔªb½Ç
    cin>>a>>b;
    float sum=a+b*0.1;
    float num=floor(sum/1.9);
    cout<<num;
    return 0;
}
