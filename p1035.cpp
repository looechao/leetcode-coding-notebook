#include<iostream>
using namespace std;

int main(){
    double sum=0,k=0;   //���������ouble���ͱ�������ȫ��AC
    cin>>k;
    for(double i=1;;i++){
        sum+=1/i;
        if(sum>k){
            int n=static_cast<int>(i);  //��˫������ת��������
            cout<<n;
            break;
        }
    }
    return 0;
}
