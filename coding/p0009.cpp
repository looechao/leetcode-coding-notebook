#include<cstring>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){    //如果用户输入的数是负数，自动返回false
            return false;
            return 0;
        }
        string str=to_string(x);     //转换成字符串
        string str1;
        int p=0;
        for(int i=str.size()-1;i>=0;i--){   //将反转后的数存入到str1
                str1[p]=str[i];
                p++;
        }
        for(int i=0;i<str.size();i++){    //比较，判断是否是回文数
            if(str[i]!=str1[i]){
                return false;
                break;
                return 0;
            }
        }
        return true;
    }
};
