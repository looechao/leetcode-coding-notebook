#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n;

int main()
{
    cin>>n;
    vector<int> setting(7,0);
    for(int i=1;i<=7;i++)
    {
        cin>>setting[i];
    }
    sort(setting.begin(),setting.end());
    vector<int> num(8,0);
    for(int i=1;i<=n;i++)
    {
        int count=0;  //每张彩票的中号次数
        for(int j=1;j<=7;j++)
        {
            int a=0;
            cin>>a;
            for(int l=1;l<=7;l++)
            {
                if(a==setting[l]) count++;
            }
        }
        num[8-count]++;
    }
    for(int i=1;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }

    return 0;
}
