#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int p,a,d,sum;

int main()
{
    string str;
    cin>>str;
    vector<int> num(str.size()+1,0);
    for(int i=0;i<str.size();i++)
    {
        if(str.at(i)=='+')
        {
            if(p==0)
            {
                num[i]=stoi(str.substr(p,i));p=i+1;
                for(int j=i+1;j<str.size();j++)
                {
                    if(str.at(j)=='+'||str.at(j)=='-') {d=j-1-i;break;}
                    if(j==str.size()-1) {d=j-i;break;}
                }
                num[i+1]=stoi(str.substr(i+1,d));
            }
            else
            {
                for(int j=i+1;j<str.size();j++)
                {
                    if(str.at(j)=='+'||str.at(j)=='-') {d=j-1-i;break;}
                    if(j==str.size()-1) {d=j-i;break;}
                }
                num[i]=stoi(str.substr(i+1,d));
            }
        }
        if(str.at(i)=='-')
        {
            if(p==0)
            {
                num[i]=stoi(str.substr(p,i));p=i+1;
                for(int j=i+1;j<str.size();j++)
                {
                    if(str.at(j)=='+'||str.at(j)=='-') {d=j-1-i;break;}
                    if(j==str.size()-1) {d=j-i;break;}
                }
                num[i+1]=-stoi(str.substr(i+1,d));
            }
            else
            {
                for(int j=i+1;j<str.size();j++)
                {
                    if(str.at(j)=='+'||str.at(j)=='-') {d=j-1-i;break;}
                    if(j==str.size()-1) {d=j-i;break;}
                }
                num[i]=-stoi(str.substr(i+1,d));
            }
        }
    }
    for(int i=0;i<num.size();i++)
    {
        sum+=num[i];
    }
    cout<<sum;
    return 0;
}
