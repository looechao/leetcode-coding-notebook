

|      | Title                                                        | Solution | TAGS       | Difficulty |
| ---- | ------------------------------------------------------------ | -------- | ---------- | ---------- |
| 0082 | [删除排序链表中的重复元素 II](https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/) | C++      | LinkedList | MEDIUM     |
| 0083 | [删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/) | C++      | LinkedList | EASY       |
| 0092 | [反转链表 II](https://leetcode.cn/problems/reverse-linked-list-ii/) | C++      | LinkedList | MEDIUM     |
| 0206 | [反转链表](https://leetcode.cn/problems/reverse-linked-list/) | C++      | LinkedList | EASY       |
| 0021 | [合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/) | C++      | LinkedList | EASY       |

# P0082 MEDIUM

#### 题目描述

[删除排序链表中的重复元素 II](https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/) 

给定一个已排序的链表的头 `head` ， *删除原始链表中所有重复数字的节点，只留下不同的数字* 。返回 *已排序的链表* 。

#### 思路

需要三个指针，pre, cur, nxt; 

用pre 链接好所有不重复的元素，cur 应当始终指向一个uniq元素

注意有很多地方需要注意边界

#### 总结

```c++
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return nullptr;
        ListNode* pre = new ListNode();
        ListNode* dummy = pre;
        ListNode* cur = head;
        ListNode* nxt = cur->next;
        pre->next = cur;
        while (nxt) //nxt最靠後
        {
            if (cur->val == nxt->val)
            {
                while (cur && cur->val == nxt->val)  //注意边界
                {
                    cur = cur->next;
                }
                pre->next = cur;
                if (!cur)
                { // 如果cur是nullptr,那么在这里结束，防止后面对空指针进行解引用
                    return dummy->next;
                }
                nxt = cur->next;
                continue;
            }
            //沒有遇到重複元素
            pre->next = cur;
            pre = pre->next;
            cur = cur->next;
            nxt = cur->next;
        }
        return dummy->next;
    }
};
```



# P0083 EASY

#### 题目描述

[删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/)

给定一个已排序的链表的头 `head` ， *删除所有重复的元素，使每个元素只出现一次* 。返回 *已排序的链表* 。

#### 思路

没有注意到链表的元素已经排好序了，所以用了下面的解法

1. 遍历所有节点元素的值
2. 将遍历到的数值插入到set当中，如果插入成功，说明是第一次出现的元素，可将其存在新的链表当中
3. 重新构建链表

#### 总结

```c++
#include <set>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            //如果链表为空的话，返回Nullptr;
            return nullptr;
        }
        ListNode* cur = head;
        set<int> st;
        ListNode* res = new ListNode();
        ListNode* dummy = res;
        //遍历链表的元素
        while(cur){
            if(st.insert(cur->val).second){ //注意这里的用法
                if(cur == head){
                    res->val = cur->val;
                }else{
                    ListNode* tmp = new ListNode(cur->val);
                    res->next = tmp;
                    res = res->next;
                }
            }
            cur = cur->next;
        }
        return dummy;
    }
};
```



# P0206 EASY

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

# P0021 EASY

#### 题目描述

将两个升序链表合并为一个新的 **升序** 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

![img](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

#### 思路

由于两个链表都是有序的，直接使用双指针策略，不断让两链表的头部节点中最小的一个尾插进入新的链表中即可

#### 总结

```c++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        if(!cur1 && !cur2){
            return nullptr;
        }
        if(!cur1 && cur2){
            return cur2;
        }
        if(!cur2 && cur1){
            return cur1;
        }
        while(cur1 && cur2){
            if(cur1->val <= cur2->val){
                ListNode* tmp = new ListNode();
                tmp->val = cur1->val;
                res->next = tmp;
                res = res->next;
                cur1 = cur1->next;
            }else{
                ListNode* tmp = new ListNode();
                tmp->val = cur2->val;
                res->next = tmp;
                res = res->next;
                cur2 = cur2->next;
            }
        }
        if(!cur1 && cur2){
            res->next = cur2;
            return dummy->next;
        }
        if(!cur2 && cur1){
            res->next = cur1;
            return dummy->next;
        }

        return dummy->next;
    }
};
```



# P EASY

#### 题目描述

#### 思路

#### 总结