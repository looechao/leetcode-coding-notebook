#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int count=0;
    int m;
    string str;
    cin>>m>>str;
    vector<int> num(str.size(),0);
    for(int i=0;i<str.size();i++)
    {
        int x=stoi(str.substr(i,1));
        num[str.size()-i-1]=x;
    }
    for(int i=str.size()-1;i>=0;i--)
    {
        if(num[i]!=0)
        {
            if(count==0)
            {
                count++;
                cout<<num[i]<<"*"<<m<<"^"<<i;
            }
            else cout<<"+"<<num[i]<<"*"<<m<<"^"<<i;
        }
    }
    return 0;
}
