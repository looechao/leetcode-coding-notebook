#include<iostream>
#include<stdio.h>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int p=0;
    int n;
    int max=0;  //����������
    int count=1; //����
    cin>>n;
    vector<int> num(n,0); //��ʼ������
    for(int i=0;i<n;i++)   //��Ԫ�ش�������
    {
        cin>>num[i];
    }
    while(p<n)    //p����ָ�������ƶ�
    {
        if(num[p]+1==num[p+1])
        {
            p++;
            count++;
        }
        else
        {
            if(count>=max) max=count;   //���Ŷ��ˣ���ʼ��
            count=1;  //����count����ֵ
            p++;
        }
    }
    cout<<max;
    return 0;
}
