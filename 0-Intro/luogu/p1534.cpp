#include<iostream>
#include<string>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n=0;  //����n
    int sad=0; //�����˳̶�
    int a=0,b=0; //��������Ͽ�ʱ��
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)  //����n��������Ĳ����˳̶�
    {
        cin>>a>>b;
        sad+=a+b-8;  //���㵱��Ĳ����˳̶�
        sum+=sad; //����ÿ��Ĳ����˳̶ȵĺ�
    }
    cout<<sum;
    return 0;
}
