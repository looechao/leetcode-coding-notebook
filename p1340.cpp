#include<string>
#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

bool isPrime(int n);  //声明函数

int main()
{
    int n=0; //存放n；
    cin>>n;
    for(int i=4;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=2;j<=i;j++)
            {
                if(isPrime(j)==true&&isPrime(i-j)==true)
                {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
                }
            }
        }

    }
    return 0;
}

bool isPrime(int n)   //素数的判定
{
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
