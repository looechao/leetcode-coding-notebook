#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    string str="0";  //�����ÿһ�����ַ����洢
    int l=0;//��¼�����ά��
    vector<int> num(10000,0);
    int count=0;   //������
    int p=1;
    bool key=false;
    while(cin>>str)   //�������ݣ���ά�������ж�
    {
        l=str.size();
        count++;
        if(count==1) key=stoi(str.substr(0,1));
        for(int i=0;i<l;i++)
        {
            if(str.at(i)-'0'==key)
            {
                num[p]++;
            }
            else
            {
                p++;
                key=str.at(i)-'0';
                num[p]++;
            }
        }
        if(count==l) break;  //�������빻�˾��ж�ѭ��
    }
    num[0]=l;
    for(int i=0;i<p+1;i++)
    {
        cout<<num[i];
        if(i<p) cout<<" ";
    }
    return 0;
}
