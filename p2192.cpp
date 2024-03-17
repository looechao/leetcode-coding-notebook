#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    vector<char> c(n,'0');
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        c.at(i)=a;
    }
    string str(c.begin(),c.end());
    long long x=stoll(str);
    if(x%90==0) cout<<x;
    else cout<<"-1";
    return 0;
}
