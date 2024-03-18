#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int n;

int main()
{
    cin>>n;
    vector<int> num(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    if(prev_permutation(num.begin(),num.end()))
    {
        for(int i=0;i<n;i++)
        {
            cout<<num[i]<<" ";
        }
    }
    else cout<<"ERROR";
    return 0;
}
