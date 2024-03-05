#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int l,m=0;   //输入马路长度和区域数量
    int count=0;   //计数
    cin>>l>>m;
    int t[l];
    for(int i=0;i<=l;i++){   //第一次遍历标记为全部未砍伐
        t[i]=0;
    }
    int a[m][2];
    for(int i=0;i<m;i++){   //输入各区域的起点和终点
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<m;i++){      //第二次遍历，每个区间的树都标记为1；
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
