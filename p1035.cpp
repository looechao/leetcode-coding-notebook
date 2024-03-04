#include<iostream>
using namespace std;

int main(){
    double sum=0,k=0;   //这里改用了double类型变量才能全部AC,考试默认全部用double最好
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
