#include<cstdio>
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
long double sum,a;//long double 保证精度没毛病
int main()
{
    if(scanf("%Lf",&a)!=EOF)
    {
        sum+=a*10000000;
        main();
    }
    else printf("%.5Lf",sum/10000000);//除回来
    return 0;
}
