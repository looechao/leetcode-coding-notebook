#include<iostream>
using namespace std;

int main(){
    int a[11];
    int count=0;
    for(int i=0;i<11;i++){
        cin>>a[i];
    }
    int height=a[10]+30;
    for(int i=0;i<10;i++){
        if(height>=a[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
