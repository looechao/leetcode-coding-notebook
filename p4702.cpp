#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int n;

int main()
{
    cin>>n;
    bool alice=true;
    vector<int> num(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    for(int i=1;;i++)
    {
        sort(num.begin(),num.end());
        if(alice) //Alice取石子
        {
            if(num[n]==0) {cout<<"Bob"; return 0;}
            else {num[n]--; alice=!alice;}
        }
        if(!alice) //Bob取石子
        {
            if(num[n]==0) {cout<<"Alice"; return 0;}
            else {num[n]--; alice=!alice;}
        }
    }
    return 0;
}
