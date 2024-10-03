#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
char a;
int i;
int balance;

int main()
{
    string str="0";
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(i==0&&str.at(i)==')') {cout<<"NO";return 0;}
        if(str.at(i)=='(') balance++;
        if(str.at(i)==')') balance--;
        if(balance==-1) break;
    }
    if(balance==0) cout<<"YES";
    else cout<<"NO";
}
