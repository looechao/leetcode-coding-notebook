#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int m,n;

int main()
{
    int price=0;
    int max=1;
    cin>>m>>n;
    vector<int> num(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    vector<int> sum(num[n-1]+1,0);
    for(int i=1;i<=num[n-1];i++)
    {
        int count=0;
        price=i;
        for(int j=0;j<n;j++)
        {
            if(i<=num[j]) count++;
        }
        if(count<=m) sum[price]=price*count;
        else sum[price]=price*m;
    }
    auto maxelement=max_element(sum.begin(),sum.end());
    int d=distance(sum.begin(),maxelement);
    sort(sum.begin(),sum.end());
    cout<<d<<" "<<sum[sum.size()-1];
    return 0;
}
