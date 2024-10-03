#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    string str="0";
    getline(cin,str);
    int p=1;
    int sum=0;
    int x=0;
    vector<int> num(27,0);
    num[19]=4;
    num[26]=4;
    for(int i=1;i<=26;i++)
    {
        if(num[i]>0)
        {
            p=0;
        }
        else num[i]=p;
        if(p==3) p=1;
        else p++;
    }
    for(int i=0;i<str.size();i++)
    {
        if(str.at(i)==' ') sum+=1;
        if('a'<=str.at(i)&&str.at(i)<='z')
        {
            x=str.at(i)-'a'+1;
            sum+=num[x];
        }
    }
    cout<<sum;
    return 0;
}
