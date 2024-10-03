

|      | Title                                                        | Solution | TAGS       | Difficulty |
| ---- | ------------------------------------------------------------ | -------- | ---------- | ---------- |
| 0092 | [反转链表 II](https://leetcode.cn/problems/reverse-linked-list-ii/) | C++      | LinkedList | MEDIUM     |
| 0206 | [反转链表](https://leetcode.cn/problems/reverse-linked-list/) | C++      | LinkedList | EASY       |

# P0206★

#### 题目描述

[反转链表](https://leetcode.cn/problems/reverse-linked-list/) 给你单链表的头节点 `head` ，请你反转链表，并返回反转后的链表

![](https://assets.leetcode.com/uploads/2021/02/19/rev1ex1.jpg)

#### 思路

1. 三个指针保存prev节点，cur节点，nxt节点
2. 遍历并更改指针的指向，注意不能丢失节点

#### 总结

```c++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummynode = head;
        ListNode* prev =nullptr;
        ListNode* cur = head;
        while(cur){
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }
};
```



## P0092 MEDIUM

#### 题目描述

[反转链表 II](https://leetcode.cn/problems/reverse-linked-list-ii/) 反转指定区间的元素，left 和 right 之间的元素

![](https://assets.leetcode.com/uploads/2021/02/19/rev2ex2.jpg)

#### 思路

1. 遍历指定区间内的元素，用栈记录下它们的value
2. 再次遍历指定区间内的元素，用栈顶元素替换掉他们的数值

#### 总结

```C++
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> st;
        int pos = 1;
        ListNode* cur = head;
        
        // 将需要反转的部分的值压入栈中
        while (cur) {
            if (pos >= left && pos <= right) {
                st.push(cur->val);
            }
            if (pos > right) break;
            cur = cur->next;
            ++pos;
        }
        
        // 重新初始化 pos 和 cur
        pos = 1;
        cur = head;
        
        // 将栈中的值弹出并更新链表
        while (cur) {
            if (pos >= left && pos <= right) {
                cur->val = st.top();
                st.pop();
            }
            if (pos > right) break;
            cur = cur->next;
            ++pos;
        }
        
        return head;
    }
};
```









# P★

#### 题目描述

#### 思路

#### 总结