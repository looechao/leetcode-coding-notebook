#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n,k=0; //pterӵ�е��̵���Ŀ����������Ҫ���̵���Ŀ
    int count =0; //peter����̵���Ŀ
    int gain=0;  //������
    cin>>n>>k;
    while(n>k)  //��k����һ����ʼ����ʣ�������k���Ƚ�
    {
        count+=k;
        n=n-k+1;
    }
    count=count+n;
    cout<<count;
    return 0;
}
