#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,sum;
string str;


int main()
{
    cin>>n;
    cin>>str;
    /*ʲô�����޸�ʱvk�ĸ���*/
    for(int i=0;i<str.size()-1;i++)
    {
        if(str.at(i)=='V'&&str.at(i+1)=='K') sum++;
    }
    /*��v�ı��ַ�����ö��*/
    for(int i=0;i<str.size();i++)
    {
        string str1=str;
        int s=0;
        str1.at(i)='V';
        for(int i=0;i<str1.size()-1;i++)
        {
            if(str1.at(i)=='V'&&str1.at(i+1)=='K') s++;
        }
        if(s>=sum) sum=s;
    }
    /*��v�ı��ַ�����ö��*/
    for(int i=0;i<str.size();i++)
    {
        string str2=str;
        int s=0;
        str2.at(i)='K';
        for(int i=0;i<str2.size()-1;i++)
        {
            if(str2.at(i)=='V'&&str2.at(i+1)=='K') s++;
        }
        if(s>=sum) sum=s;
    }
    cout<<sum;
}
