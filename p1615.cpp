#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int n=0; //一秒能偷的笔记本的个数
    string time1=" ";
    string time2=" ";
    int p=0,q=0;
    vector<int> num1(3,0),num2(3,0);
    cin>>time1;
    cin>>time2;
    cin>>n;
    while(p<time1.size())
    {   if(p==0)
        {
            if(time1.at(p+1)!=':')
                num1[0]=stoi(time1.substr(p,2));
            else
                num1[0]=stoi(time1.substr(p,1));
        }
        if(time1.at(p)==':')
        {
            if(p==1||p==2)
            {
                if(time1.at(p+2)!=':')
                    num1[1]=stoi(time1.substr(p+1,2));
                else
                    num1[1]=stoi(time1.substr(p+1,1));
            }
            if(p>2&&p<=5)
            {
                if(p+2==time1.size())
                    {num1[2]=stoi(time1.substr(p+1,1));break;}
                else
                    {num1[2]=stoi(time1.substr(p+1,2));break;}
            }
        }
        p++;
    }
    while(q<time2.size())
    {   if(q==0)
        {
            if(time2.at(q+1)!=':')
                num2[0]=stoi(time2.substr(q,2));
            else
                num2[0]=stoi(time2.substr(q,1));
        }
        if(time2.at(q)==':')
        {
            if(q==1||q==2)
            {
                if(time2.at(q+2)!=':')
                    num2[1]=stoi(time2.substr(q+1,2));
                else
                    num2[1]=stoi(time2.substr(q+1,1));
            }
            if(q>2&&q<=5)
            {
                if(q+2==time2.size())
                    {num2[2]=stoi(time2.substr(q+1,1));break;}
                else
                    {num2[2]=stoi(time2.substr(q+1,2));break;}
            }
        }
        q++;
    }
    long double seconds=(num2[0]-num1[0])*3600+(num2[1]-num1[1])*60+num2[2]-num1[2];
    cout<<seconds*n;
    return 0;
}
