#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    int n;
    int judge=0;
    cin>>n;
    int flag[n];
    for(int i=0;i<n;i++){   //���������Ԫ�صı��
        flag[i]=0;
    }
    int num[n];
    for(int i=0;i<n;i++)  //��������
    {
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++)    //�жϲ�ֵ�Ƿ���������
    {
        int diff=abs(num[i+1]-num[i]);
        flag[diff]=1;   //�������ڣ����Ϊ1
    }
    for(int i=1;i<n;i++)
    {
        if(flag[i]==0)    //����һ�����ڣ������鲻�ǻ��ֵ���
        {
            judge=1;
            break;
        }
    }
    if(judge==1)
    {
        cout<<"Not jolly";
    }
    else
    {
        cout<<"Jolly";
    }
    return 0;
}
