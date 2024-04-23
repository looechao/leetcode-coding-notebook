# P0013★
题目描述：roman-to-integer，罗马数转阿拉伯数字
#### 思路
- 使用宏定义define七种罗马字符
- 使用条件判断进行逐个扫描求和
#### 总结
- 注意类似I在V左边这种需要减的情况
```c++
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I' && (i + 1 < s.size()) && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                sum -= I;
            } else if (s[i] == 'X' && (i + 1 < s.size()) && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                sum -= X;
            } else if (s[i] == 'C' && (i + 1 < s.size()) && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                sum -= C;
            } else {
                if (s[i] == 'I') sum += I;
                else if (s[i] == 'V') sum += V;
                else if (s[i] == 'X') sum += X;
                else if (s[i] == 'L') sum += L;
                else if (s[i] == 'C') sum += C;
                else if (s[i] == 'D') sum += D;
                else if (s[i] == 'M') sum += M;
            }
        }
        return sum;
    }
};
```
# P0014★
题目描述：longest-common-prefix, 查找字符串中的最长公共前缀
#### 思路
- 纵向比较字符串组中每串字符串的字符，push_back到lcp里
- 如果出现不同的情况就结束循环
- 返回lcp
#### 总结
逻辑较简单,注意循环外最后的返回值也应该是lcp
```c++
#include<cstring>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp;
        int minimum_length = 200;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<=minimum_length){
                minimum_length=strs[i].size();
            }
        }
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<minimum_length;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j].at(i)!=strs[j-1].at(i)){
                    return lcp;
                }
            }
            lcp.push_back(strs[0].at(i));
        }
        return lcp;
    }
};
```









# P00★
题目描述：
#### 思路
#### 总结