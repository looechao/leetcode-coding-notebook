#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int budget;  //���ÿ���µ�Ԥ��
    int sum=0; //��¼������е�Ǯ
    int deposit=0;  //��¼������Ǯ
    int flag=0;  //��¼�Ƿ�͸֧
    int monthofdeath; //��¼͸֧�·�
    for(int i=1;i<=12;i++){
        sum+=300;  //�³������300
        cin>>budget;  //����ÿ���µ�Ԥ��
        sum-=budget;
            if(sum<0)
            {
                flag=1;
                monthofdeath = i;
                break;
            }
        deposit+=sum/100;   //���ȡ����¼����
        sum%=100;  //ʣ���Ǯȡ�༴�ɵõ�
    }
    if(flag==0)
    {
        sum+=deposit*120;  //������Ϣÿ��100=120
        cout<<sum;
    }
    else
    {
        cout<<-monthofdeath;
    }
    return 0;
}
