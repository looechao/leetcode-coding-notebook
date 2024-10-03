#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

string str;

int main()
{
    vector<int> num(3,0);
    vector<int> num1(3,0);
    for(int i=0;i<3;i++)
    {
        cin>>num[i];
    }
    cin>>str;
    sort(num.begin(),num.end());
    for(int i=0;i<3;i++)
    {
        char c=str.at(i);
        if(c=='A') num1[i]=num[0];
        if(c=='B') num1[i]=num[1];
        if(c=='C') num1[i]=num[2];
    }
    for(int i=0;i<3;i++)
    {
        cout<<num1[i]<<" ";
    }
    return 0;
}
