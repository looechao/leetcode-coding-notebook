#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    int n; //��ĸ���
    cin>>n;
    vector<int> num(n,0);
    vector<int> num1(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    num1[0]=0;
    for(int i=1;i<n;i++)    //�������˵�һֻ�����ÿһֻС��
    {   int count=0;
        for(int j=0;j<i;j++)   //����֮ǰ�������ֵ���Լ������Ƚ�
        {
            if(num[j]<num[i]) count++;
        }
        num1[i]=count;
    }
    for(int i=0;i<n;i++)   //���
    {
        cout<<num1[i]<<" ";
    }
}
