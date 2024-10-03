#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,x;

int main()
{
    int sum=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        string str=to_string(i);
        for(int j=0;j<str.size();j++)
        {
            int c=stoi(str.substr(j,1));
            if(c==x) sum++;
        }
    }
    cout<<sum;
    return 0;
}
