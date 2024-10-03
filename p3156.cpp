#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,m;

int main()
{
    cin>>n>>m;
    vector<int> num(n+1,0);
    vector<int> ask(m+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>ask[i];
    }
    for(int i=1;i<=m;i++)
    {
        cout<<num[ask[i]]<<endl;
    }
    return 0;
}
