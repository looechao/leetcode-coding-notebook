#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int max=0;
    int a,b=0; //У��ʱ���У��γ�ʱ��
    int sum,day=0;
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        sum=a+b;
        if(sum>max&&sum>8) {
                max=sum;day=i;  //ѡ������˵�һ��
        }
    }
    cout<<day;
}
