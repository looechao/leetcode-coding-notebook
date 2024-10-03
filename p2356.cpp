#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int max=numeric_limits<int>::min();
    long long n=0;
    bool u=false;
    cin>>n;
    long long a[n][n];
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                u=true;
                long long s=0;
                long long row=i;
                long long column=j;
                for(long long k=0;k<n;k++)
                {
                    if(a[row][k]>0) s++;
                    if(a[k][column]>0) s++;
                }
                if(s>=max) max=s;
            }
        }
    }
    if(u==false) cout<<"Bad Game!";
    else cout<<max;
    return 0;
}
