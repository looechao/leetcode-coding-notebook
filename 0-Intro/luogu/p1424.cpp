#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int x=0,n=0;
    int sum=0;    //���㹫���
    int day=0;    //�����x
    int count=0;  //ѭ����������
    cin>>x>>n;
    while(count<n)
    {
        day = x%7;   //��ȡ����
        if(day!=6&&day!=0)  //�ж��Ƿ���������
        {
            sum+=250;
        }
        count++;
        x++;
    }
    cout<<sum;
    return 0;
}
