#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int l,m=0;   //������·���Ⱥ���������
    int count=0;   //����
    cin>>l>>m;
    int t[l];
    for(int i=0;i<=l;i++){   //��һ�α������Ϊȫ��δ����
        t[i]=0;
    }
    int a[m][2];
    for(int i=0;i<m;i++){   //���������������յ�
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<m;i++){      //�ڶ��α�����ÿ��������������Ϊ1��
        for(int j=a[i][0];j<=a[i][1];j++){
            t[j]=1;
        }
    }
    for(int i=0;i<=l;i++){
        if(t[i]==0 ) count++;
    }
    cout<<count;
    return 0;
}
