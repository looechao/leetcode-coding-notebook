#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    vector<int> num(3,0); //´æ·Åa,b,c
    int p=2,count=0;
    string str="0";
    cin>>str;
    while(p<str.size()-1)
    {
        if(str.at(p-2)=='a'&&str.at(p)=='=')
        {
            if(str.at(p+1)-'0'>=0&&str.at(p+1)-'0'<=9)  num[0]=str.at(p+1)-'0';
            if(str.at(p+1)=='b') num[0]=num[1];
            if(str.at(p+1)=='c') num[0]=num[2];
        }
        if(str.at(p-2)=='b'&&str.at(p)=='=')
        {
            if(str.at(p+1)-'0'>=0&&str.at(p+1)-'0'<=9)  num[1]=str.at(p+1)-'0';
            if(str.at(p+1)=='a') num[1]=num[0];
            if(str.at(p+1)=='c') num[1]=num[2];
        }
        if(str.at(p-2)=='c'&&str.at(p)=='=')
        {
            if(str.at(p+1)-'0'>=0&&str.at(p+1)-'0'<=9)  num[2]=str.at(p+1)-'0';
            if(str.at(p+1)=='b') num[2]=num[1];
            if(str.at(p+1)=='a') num[2]=num[0];
        }
        p++;
    }
    cout<<num[0]<<" "<<num[1]<<" "<<num[2];
    return 0;
}
