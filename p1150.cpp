#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n,k=0; //pter拥有的烟的数目，换新烟需要的烟蒂数目
    int count =0; //peter抽的烟的数目
    int gain=0;  //换的烟
    cin>>n>>k;
    while(n>k)  //抽k根换一根，始终用剩余的烟与k做比较
    {
        count+=k;
        n=n-k+1;
    }
    count=count+n;
    cout<<count;
    return 0;
}
