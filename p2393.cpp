#include<cstdio>
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
long double sum,a;//long double ��֤����ûë��
int main()
{
    if(scanf("%Lf",&a)!=EOF)
    {
        sum+=a*1000000;
        main();
    }
    else printf("%.5Lf",sum/1000000);//������
    return 0;
}
