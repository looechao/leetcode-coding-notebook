#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    string group;     //С����ַ���
    string star;      //���ǵ��ַ���
    int sum1=1,sum2=1;   //��ų˻�
    cin>>group>>star;
    for(int i=0;i<group.size();i++)  //��ֲ�����С�����ĸ�˻�
    {
        int num=group.at(i)-'A'+1;
        sum1*=num;
    }
    for(int i=0;i<star.size();i++)  //��ֲ��������ǵ���ĸ�˻�
    {
        int num=star.at(i)-'A'+1;
        sum2*=num;
    }
        if(sum1%47==sum2%47)   //�ж�ȥ��
    {
        cout<<"GO";
    }
    else cout<<"STAY";
    return 0;
}
