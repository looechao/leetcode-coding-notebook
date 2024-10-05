

|      | Title                                                        | Solution | TAGS  | Difficulty |
| ---- | ------------------------------------------------------------ | -------- | ----- | ---------- |
| 1047 | [删除字符串中的所有相邻重复项](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/) | C++      | Stack | EASY       |
| 0020 | [有效的括号](https://leetcode.cn/problems/valid-parentheses/) | C++      | Stack | EASY       |
| 0123 | [LCR 123. 图书整理 I](https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/) | C++      | Stack | EASY       |



# P1047 EASY

#### 题目描述

[删除字符串中的所有相邻重复项](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/)

给出由小写字母组成的字符串 `s`，**重复项删除操作**会选择两个相邻且相同的字母，并删除它们。

在 `s` 上反复执行重复项删除操作，直到无法继续删除。

在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。

#### 思路

1. 扫描字符串中的每一个元素
2. 与栈顶元素作比较
3. 如果与栈顶元素相同，栈pop, 新元素不入栈

#### 总结

```c++
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c : s){
            if(!st.empty() && st.top() == c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
```



# P0020 EASY

#### 题目描述

[有效的括号](https://leetcode.cn/problems/valid-parentheses/)

给定一个只包括 `'('`，`')'`，`'{'`，`'}'`，`'['`，`']'` 的字符串 `s` ，判断字符串是否有效。

有效字符串需满足：

1. 左括号必须用相同类型的右括号闭合。
2. 左括号必须以正确的顺序闭合。
3. 每个右括号都有一个对应的相同类型的左括号。

#### 思路

1. 扫描并将括号入栈
2. 当遇到右括号的时候，与栈顶元素作比较
3. 若匹配则栈顶出栈，新元素不入栈，否则返回false

#### 总结

```c++
class Solution {
public:
    bool isleft(char c){
        switch(c){
            case '(':
                return true;
            case '[':
                return true;
            case '{':
                return true;    
            default:
                return false;
        }
    }

    bool isright(char c){
        switch(c){
            case ')':
                return true;
            case ']':
                return true;
            case '}':
                return true;    
            default:
                return false;
        }
    }

    bool ismatch(char l, char r){
        if( (l == '(' && r == ')') ||
            (l == '[' && r == ']') ||
            (l == '{' && r == '}') ){
                return true;
                }else{
                return false;
        }
    }

    bool isValid(string s) {
        stack<char> st;
        for(auto c : s){
            if(isleft(c)){
                st.push(c);
            }
            if(!st.empty() && isright(c)){
                if(ismatch(st.top(), c)){
                    st.pop();
                }else{
                    return false;
                }
            }else if(st.empty() && isright(c)){
                return false;
            }
        }
        return st.empty();
    }
};
```

# PLCR 123 EASY

#### 题目描述

书店店员有一张链表形式的书单，每个节点代表一本书，节点中的值表示书的编号。为更方便整理书架，店员需要将书单倒过来排列，就可以从最后一本书开始整理，逐一将书放回到书架上。请倒序返回这个书单链表。

#### 思路

1. 遍历链表节点，将节点的值入栈
2. 遍历栈中元素，将栈顶Pushback到vector当中

#### 总结

```c++
class Solution {
public:
    vector<int> reverseBookList(ListNode* head) {
        stack<int> restack;
        ListNode* cur = head;
        while(cur){
            restack.push(cur->val);
            cur = cur->next;
        }
        vector<int> res;
        while(!restack.empty()){
            res.push_back(restack.top());
            restack.pop();
        }
        return res;
    }
};
```







# P EASY

#### 题目描述

#### 思路

#### 总结