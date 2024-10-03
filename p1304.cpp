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
    for(int i=4;i<=n;i+=2)
    {
            for(int j=2;j<=i/2;j++)
            {
                if(isPrime(j)==true&&isPrime(i-j)==true)
                {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                break;
                }
            }

    }
    return 0;
}

bool isPrime(int n)   //素数的判定
{
	for(int i = 2;i * i <= n;i++)//只用枚举到sqrt(x),应该会快一点
	{
		if(n % i == 0)
			return false;
	}
	return true;
}
