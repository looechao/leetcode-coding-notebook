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
    int s=0,x=0;
    cin>>s>>x;
    int l=7;       //С�㵱ǰ���ٶ�
    int mile=0;   //С�㵱ǰ��λ��
    while(mile<s)
    {
        mile+=l;
        l*=0.98;
        if(l<1) break;
    }
    int d=s+x-mile;
    if(s+x==mile) cout<<"n";
    if(d<=0) cout<<"n";   //��������һ�����Ѿ������˷�Χ֮��
    if(d>0&&d>l) cout<<"y";   //��һ����Ȼ�ڷ�Χ��
    return 0;
}
