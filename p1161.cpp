#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;  //�����������
    double a=0;
    int a1=0;
    int t=0;
    int l=2000000;
    vector<int> num(l,0);  //���ÿ���Ƶ�״̬��Ϣ
    for(int i=0;i<n;i++)
    {
        cin>>a>>t;    //����a��t
        for(int i=1;i<=t;i++)   //forѭ�������н���ÿ�ֲ���
        {
            a1=static_cast<int>(floor(a*i));
            num[a1]+=1;
        }
    }
    for(int i=0;i<l;i++)  //�������еƵ�״̬��Ϣ���ҳ���������Ϊ������
    {
        if(num[i]%2!=0)
        {
            cout<<i;
        }
    }
    return 0;
}
