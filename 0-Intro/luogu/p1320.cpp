#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    string str="0";  //点阵的每一行用字符串存储
    int l=0;//记录点阵的维数
    vector<int> num(10000,0);
    int count=0;   //计数器
    int p=1;
    bool key=false;
    while(cin>>str)   //读入数据，按维数结束中断
    {
        l=str.size();
        count++;
        if(count==1) key=stoi(str.substr(0,1));
        for(int i=0;i<l;i++)
        {
            if(str.at(i)-'0'==key)
            {
                num[p]++;
            }
            else
            {
                p++;
                key=str.at(i)-'0';
                num[p]++;
            }
        }
        if(count==l) break;  //行数输入够了就中断循环
    }
    num[0]=l;
    for(int i=0;i<p+1;i++)
    {
        cout<<num[i];
        if(i<p) cout<<" ";
    }
    return 0;
}
