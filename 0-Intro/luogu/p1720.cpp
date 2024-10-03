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
    int n; //存放自然数n
    cin>>n;
    double a=(1+sqrt(5))/2;
    double b=(1-sqrt(5))/2;
    double fn=(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%.2f",fn);
    return 0;
}
