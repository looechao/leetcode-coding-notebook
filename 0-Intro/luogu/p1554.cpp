#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int m=0,n=0;
    vector<int> num(10,0);
    cin>>m>>n;
    for(int i=m;i<=n;i++)     //ͳ��ÿ�������е�����Ƶ��
    {
        string str=to_string(i);
        for(int j=0;j<str.size();j++)    //�������
        {
            int p=stoi(str.substr(j,1));
            num[p]++;
        }
    }
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
}

