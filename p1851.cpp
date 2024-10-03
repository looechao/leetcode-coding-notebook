#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;

int s;


int main()
{
    cin>>s;
    for(int i=s; ;i++)
    {
        int a=0,b=0,a1=0,b1=0;
        a=i;
        for(int j=1;j<=sqrt(a);j++)
        {
            if(a%j==0)
            {
                a1+=j+a/j;
            }
        }
        a1=a1-a;

        b=a1;
        for(int j=1;j<=sqrt(b);j++)
        {
            if(b%j==0)
            {
                b1+=j+b/j;
            }
        }
        b1-=b;

        if(a==b1&&a!=b)
        {
            cout<<a<<" "<<b;
            return 0;
        }
    }
}
