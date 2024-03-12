#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
char a;
int res;
int i;

int main()
{
    int balance = 0; //À¨ºÅ×´Ì¬
    for(;;i++)
    {
        cin>>a;
        if(i==0&&a==')') {cout<<"NO"; return 0;}
        if(a=='(') balance++;
        if(a==')') balance--;
        if(balance==0) res=1;
        else    res=0;
        if(a=='@') break;
    }
    if(res==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
