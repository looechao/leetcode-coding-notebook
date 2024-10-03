#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

char c;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        int x=str.at(i)-'a'+n;
        if('a'+x<=122) c='a'+x;
        else c='a'+'a'+x-123;
        cout<<c;
    }
    return 0;
}
