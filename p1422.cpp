#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<vector>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n=0; //�õ���
    double cost=0;
    cin>>n;
    if(n<=150)   //�����ݶȼ�����
        cost=n*0.4463;
    if(n>=151&&n<=400)
    {
        cost=150*0.4463+(n-150)*0.4663;
    }
    if(n>=401)
    {
        cost=150*0.4463+250*0.4663+(n-400)*0.5663;
    }
    cout<<round(cost*10)/10;   //����һλС��
    return 0;
}
