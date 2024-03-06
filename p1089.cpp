#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int budget;  //存放每个月的预算
    int sum=0; //记录津津手中的钱
    int deposit=0;  //记录津津储蓄的钱
    int flag=0;  //记录是否透支
    int monthofdeath; //记录透支月份
    for(int i=1;i<=12;i++){
        sum+=300;  //月初妈妈给300
        cin>>budget;  //读入每个月的预算
        sum-=budget;
            if(sum<0)
            {
                flag=1;
                monthofdeath = i;
                break;
            }
        deposit+=sum/100;   //存款取整记录张数
        sum%=100;  //剩余的钱取余即可得到
    }
    if(flag==0)
    {
        sum+=deposit*120;  //加上利息每张100=120
        cout<<sum;
    }
    else
    {
        cout<<-monthofdeath;
    }
    return 0;
}
