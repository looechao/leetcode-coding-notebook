#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n=0,order=1;
    cin>>n;
    string str;
    cin>>str;
    vector<int> num(n,0);
    for(int i=0;i<n;i++)
    {
        num[i]=stoi(str.substr(i,1));
    }
    while(prev_permutation(num.begin(),num.end())) order++;
    cout<<order;
}
