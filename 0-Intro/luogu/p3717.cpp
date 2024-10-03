#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int n,m,r,sum;

int main()
{
    cin>>n>>m>>r;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        int x=0,y=0;
        cin>>x>>y;
        a[x-1][y-1]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                double r1=sqrt((x-1-i)*(x-1-i)+(y-1-j)*(y-1-j));
                if(r1<=r) a[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)  sum++;
        }
    }
    cout<<sum;
    return 0;
}
