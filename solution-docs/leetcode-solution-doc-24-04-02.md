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

# P0021★

题目描述：merge-two-sorted-lists, 合并两个有序链表，按照升序

#### 思路

使用哑节点，防止直接对空指针进行解引用

#### 总结

```c
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;  //定义哑节点
    struct ListNode* tail = &dummy;  //用于记录链表内元素所在的位置
   	dummy.next = NULL;
    while(list1 && list2){
        if(list1->val <= list2->val){
            tail->next = list1;
            list1 = list1->next;
            tail = tail->next;
        }else{
            tail->next = list2;
            list2 = list2->next;
            tail = tail->next;
        }
    }
    //只剩下一个链表的时候，直接链接
    if(list1){
            tail->next = list1;
    }
    if(list2){
            tail->next = list2;
    }
    return dummy.next;
}
```

精华部分是使用dummy作为哑节点，用tail穿针引线一般的按顺序记录每个节点的地址

# P002★

题目描述：add-two-numbers, 给你两个 **非空** 的链表，表示两个非负的整数。它们每位数字都是按照 **逆序** 的方式存储的，并且每个节点只能存储 **一位** 数字。

#### 思路

模拟初等数学中加法运算的过程，用carry表示进位

```bash
342 + 564 = 807

        [2]--->[4]--->[3]

        [5]--->[6]--->[4]

dummy-->[7]--->[0]--->[7+1]

```

#### 总结

```c
#include<math.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;
    int carry = 0;
    while(l1 || l2){
        int n1 = l1? l1->val:0;
        int n2 = l2? l2->val:0;
        int sum = n1 + n2 + carry; 
        struct ListNode* new_node = malloc(sizeof(struct ListNode));
        new_node->val = sum%10;
        new_node->next = NULL;
        tail->next = new_node;
        tail = tail->next;
        carry = sum / 10;
        if(l1){
            l1 = l1->next;
        }
        if(l2){
            l2 = l2->next;
        }  
    }
    if(carry == 1){
        struct ListNode* new_node = malloc(sizeof(struct ListNode));
        new_node->val = 1;
        new_node->next = NULL;
        tail->next = new_node;
    }
    return dummy.next;
}
```

# P0083★

题目描述：remove-duplicates-from-sorted-list, 给定的链表是已经排好序的链表，删除所有的错误元素

#### 思路

- 由于是已经排好序的链表，只需要比较连续的元素即可
- 比较当前节点的值和下一个节点的值
- 注意指针移动的顺序，小心漏掉重复的元素

#### 总结

```c
struct ListNode* deleteDuplicates(struct ListNode* head) {
    //处理空链表
    if(!head){
        return head;
    }
    
    while(head->next){
        if(head->val == head->next->val){
            head->next = head->next->next;
        }else{
            head = head->next;
        }
    }
    
    return head;
}
```




# P00★

题目描述：

#### 思路

#### 总结
