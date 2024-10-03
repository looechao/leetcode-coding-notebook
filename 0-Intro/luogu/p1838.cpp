#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> num(10,0);
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        if((i+1)%2!=0)
            num[str[i]-'0']=1;
        else
            num[str[i]-'0']=2;
    }
    if(num[1]==num[2]&&num[1]==num[3]&&num[1]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[1]==num[4]&&num[1]==num[7]&&num[1]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[1]==num[5]&&num[1]==num[9]&&num[1]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[3]==num[6]&&num[3]==num[9]&&num[3]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[3]==num[5]&&num[3]==num[7]&&num[3]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[4]==num[5]&&num[4]==num[6]&&num[4]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[7]==num[8]&&num[7]==num[9]&&num[7]==1) {cout<<"xiaoa wins.";return 0;}
    if(num[1]==num[2]&&num[1]==num[3]&&num[1]==2) {cout<<"uim wins.";return 0;}
    if(num[1]==num[4]&&num[1]==num[7]&&num[1]==2) {cout<<"uim wins.";return 0;}
    if(num[1]==num[5]&&num[1]==num[9]&&num[1]==2) {cout<<"uim wins.";return 0;}
    if(num[3]==num[6]&&num[3]==num[9]&&num[3]==2) {cout<<"uim wins.";return 0;}
    if(num[3]==num[5]&&num[3]==num[7]&&num[3]==2) {cout<<"uim wins.";return 0;}
    if(num[4]==num[5]&&num[4]==num[6]&&num[4]==2) {cout<<"uim wins.";return 0;}
    if(num[7]==num[8]&&num[7]==num[9]&&num[7]==2) {cout<<"uim wins.";return 0;}
    cout<<"drew.";
    return 0;
}
