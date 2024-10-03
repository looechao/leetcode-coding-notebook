#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int p=0;
    int x=1;
    vector<int> num(str.size()+1,0);
    for(int i=1;i<=str.size();i++)
    {
        if(i%3==0) num[i]=1;
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=str.size();j++)
        {
            char a=str.at(j-1);
            if(num[j]==1)
            {
                if(i==1) cout<<"..*..";
                if(i==2) cout<<".*.*.";
                if(i==3) cout<<"*."<<a<<".*";
                if(i==4) cout<<".*.*.";
                if(i==5) cout<<"..*..";
            }
            else
            {
                if(str.size()==1)
                {
                    if(i==1) cout<<"..#..";
                    if(i==2) cout<<".#.#.";
                    if(i==3) cout<<"#."<<a<<".#";
                    if(i==4) cout<<".#.#.";
                    if(i==5) cout<<"..#..";
                }
                else
                {
                    if(j!=str.size())
                    {
                        if(i==1&&num[j-1]==1) cout<<".#.";
                        if(i==2&&num[j-1]==1) cout<<"#.#";
                        if(i==3&&num[j-1]==1) cout<<"."<<a<<".";
                        if(i==4&&num[j-1]==1) cout<<"#.#";
                        if(i==5&&num[j-1]==1) cout<<".#.";
                        if(i==1&&num[j-1]==0) cout<<"..#.";
                        if(i==2&&num[j-1]==0) cout<<".#.#";
                        if(i==3&&num[j-1]==0) cout<<"#."<<a<<".";
                        if(i==4&&num[j-1]==0) cout<<".#.#";
                        if(i==5&&num[j-1]==0) cout<<"..#.";
                    }
                    if(j==str.size())
                    {
                        if(i==1&&num[j-1]==1) cout<<".#..";
                        if(i==2&&num[j-1]==1) cout<<"#.#.";
                        if(i==3&&num[j-1]==1) cout<<"."<<a<<".#";
                        if(i==4&&num[j-1]==1) cout<<"#.#.";
                        if(i==5&&num[j-1]==1) cout<<".#..";
                        if(i==1&&num[j-1]==0) cout<<"..#..";
                        if(i==2&&num[j-1]==0) cout<<".#.#.";
                        if(i==3&&num[j-1]==0) cout<<"#."<<a<<".#";
                        if(i==4&&num[j-1]==0) cout<<".#.#.";
                        if(i==5&&num[j-1]==0) cout<<"..#..";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
