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
    double s=0; //��Ҫ�εľ���
    double d=2;  //��һ������Ӿ�ľ���
    double sum=0; //��¼�Ѿ��εľ���
    int count=0; //��¼����
    cin>>s;
    while(sum<s)
    {
        sum+=d;
        d*=0.98;
        count++;
    }
    cout<<count;
    return 0;
}
