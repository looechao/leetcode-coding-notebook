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
    int n; //��������
    double a=0,b=0; //ÿ�β��������ĺͻ�õľ���
    int p=1; //�ڼ��β���
    double exp=0,level=0,life=10.00; //��ʼ���������ֵ
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
