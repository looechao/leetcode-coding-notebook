#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;

int n,m;

int main()
{
    int sum=0;   //sum ��ʾ�Ѿ�ȷ���˵����ĺͣ������ҳ�ʣ�����
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cout<<(n-sum)/(m-i)<<" ";
        sum+=(n-sum)/(m-i);
    }
    return 0;
}
