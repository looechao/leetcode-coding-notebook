#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,m,counting;

int main()
{
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=0;
            if(a[i][j]=='?')
            {   int p=i;
                int py=j-1;
                int pyend=j+1;
                if(py<0) py=0;
                if(pyend>=m) pyend=j-1;
                for(int k=py;k<=pyend;k++)
                {
                    if(a[p][k]=='*') sum++;
                }
                if(p>0)
                {
                    for(int k=py;k<=pyend;k++)
                    {
                    if(a[p-1][k]=='*') sum++;
                    }
                }
                if(p+1<n)
                {
                    for(int k=py;k<=pyend;k++)
                    {
                    if(a[p+1][k]=='*') sum++;
                    }
                }
                if(sum!=0) a[i][j]=to_string(sum).at(0);
                else a[i][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {cout<<a[i][j];}
        if(i!=n-1) cout<<endl;
    }
    return 0;
}
