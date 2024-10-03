#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int n,x;
string str1,str2,str3;

int main()
{
    cin>>n;
    cin>>str1>>str2;
    str3=str1;
    for(int i=0;i<str1.size();i++)
    {
        if(str1.at(i)<str2.at(i)) x=-1;
        if(str1.at(i)>=str2.at(i)) str3.at(i)=str2.at(i);
    }
    if(x!=-1) cout<<str3;
    else cout<<x;
}
