#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int sum;

int main()
{
    vector<int> num(42+1,0);
    for(int i=0;i<10;i++)
    {
        int a=0;
        cin>>a;
        num[a%42]=1;
    }
    for(int i=0;i<num.size();i++)
    {
        if(num[i]==1) sum++;
    }
    cout<<sum;
    return 0;
}
