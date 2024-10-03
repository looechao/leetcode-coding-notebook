#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int n,m,k;

int main()
{
    cin>>n>>m>>k;
    int x=m+k;
    int i=1;
    int sum=0;  //统计怪物的数量
    vector<int> num(n*n+1,-1);
    while(i<=m+k)
    {
        int x=0,y=0;
        cin>>x>>y;
        if(i<=m)
            {
                num[x+(y-1)*n]=1;
            }
        if(i>m)
            num[x+(y-1)*n]=2;
        i++;
    }
    for(int i=1;i<=n*n;i++)
    {
        cout<<num[i]<<"      ";
        if(i%n==0) cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n*n;i++)
    {
        if(num[i]==1)
        {
            int p=i+1,q=i-1;
            while(p<=n*n)
            {
                if(num[p]==-1)
                {
                    if(p<=i+2) num[p]=0;
                    if(i+n-1<=p&&p<=i+n+1) num[p]=0;
                    if(p==i+2*n) num[p]=0;
                }
                p++;
            }
            while(q>0)
            {
                if(q>=i-2||i-n-1<=q&&q<=i-n+1||q==i-2*n&&num[q]==-1) num[q]=0;
                q--;
            }
        }
        if(num[i]==2)
        {
            int p=i+1,q=i-1;
            while(p<=n*n)
            {
                if(p<=i+2||i+n-2<=p&&p<=i+n+2||i+2*n-2<=p&&p<=i+2*n+2&&num[p]==-1)
                {
                    if(num[p]!=1&&num[p]!=2) num[p]=0;
                    p++;
                }
            }
            while(q>0)
            {
                if(q>=i-2||i-n-2<=q&&q<=i-n+2||i-2*n-2<=q&&q<=i-2*n+2&&num[q]==-1)
                {
                    if(num[q]!=1&&num[q]!=2) num[q]=0;
                    q--;
                }
            }
        }
    }
    for(int i=1;i<=n*n;i++)
    {
        cout<<num[i]<<"      ";
        if(i%n==0) cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n*n;i++)
    {
        if(num[i]==-1)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
