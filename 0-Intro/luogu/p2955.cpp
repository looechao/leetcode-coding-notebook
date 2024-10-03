#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n;

int main()
{
    cin>>n;
    vector<int> judge(n+1,0);
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        int a=stoi(str.substr(str.size()-1,i));
        judge[i]=a%2;
    }
    for(long long i=1;i<=n;i++)
    {
        if(judge[i]!=0) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }
    return 0;
}
