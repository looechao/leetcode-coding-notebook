#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int n,m,x,y;   //存放数据
int a,b,c,d;  //存放坐标

int main()
{
    int count=1;
    int k=1;
    cin>>n>>m>>x>>y;
    vector<int> area(n*m+1,0);
    vector<int> last(n*m+1,0);
    vector<int> key(y+1,0);
    vector<int> keylast(y+1,0);
    while(count<=x+y)
    {
        if(count<=x)
        {
            cin>>a>>b>>c>>d;
            int p=(a-1)*m+b;
            for(int i=p;i<=(c-1)*m+d;i++)
            {
                if(i<=p+d-b) {area[i]++;last[i]=count;}
                for(int j=1;j<=c-a;j++)
                    {
                        if(p+m*j<=i&&i<=p+m*j+d-b)
                        {area[i]++;last[i]=count;}
                    }
            }
        }
        if(count>x&&count<=x+y)
        {
            cin>>a>>b;
            key[k]=area[(a-1)*m+b];
            keylast[k]=last[(a-1)*m+b];
            k++;
        }
        count++;
    }
    int l=1;
    while(l<=y)
    {
        if(key[l]>0) cout<<"Y"<<" "<<key[l]<<" "<<keylast[l]<<endl;
        else cout<<"N"<<endl;
        l++;
    }
    return 0;
}
