#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n=0,l=0,r=0; //���鳤�ȣ���Χ���ͷ�Χ�յ�
    int count=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        string str = to_string(i);  //����������ת�����ַ���
        n=str.size(); //����ַ����ĳ��ȣ����㻮���Ӵ�
        for(int i=0;i<n;i++)
        {
            if(str.substr(i,1)=="2")  //�����ִ���2�ĸ���
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
