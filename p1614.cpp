#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<limits>
using namespace std;

int main()
{
    int n=0,m=0;
    cin>>n>>m;
    int count=0;  //����ͳ��
    int p=0;   //ָ��|�α�
    int min=numeric_limits<int>::max();
    vector<int> num(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    while(p<=n-m)    //���ƻ������ڵļ���
    {
        for(int i=p;i<p+m;i++)
        {
            count+=num[i];
        }
        if(count<min) min=count;
        count = 0;
        p++;
    }
    cout<<min;
    return 0;
}
