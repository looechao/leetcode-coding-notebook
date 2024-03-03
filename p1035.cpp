#include<iostream>
using namespace std;

int main(){
    double sum=0,k=0;   //这里改用了ouble类型变量才能全部AC
    cin>>k;
    for(double i=1;;i++){
        sum+=1/i;
        if(sum>k){
            int n=static_cast<int>(i);  //将双浮点数转换成整型
            cout<<n;
            break;
        }
    }
    return 0;
}
