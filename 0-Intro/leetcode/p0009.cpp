#include<cstring>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){    //����û���������Ǹ������Զ�����false
            return false;
            return 0;
        }
        string str=to_string(x);     //ת�����ַ���
        string str1;
        int p=0;
        for(int i=str.size()-1;i>=0;i--){   //����ת��������뵽str1
                str1[p]=str[i];
                p++;
        }
        for(int i=0;i<str.size();i++){    //�Ƚϣ��ж��Ƿ��ǻ�����
            if(str[i]!=str1[i]){
                return false;
                break;
                return 0;
            }
        }
        return true;
    }
};
