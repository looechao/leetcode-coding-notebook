/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
 *
 * https://leetcode.cn/problems/reverse-linked-list-ii/description/
 *
 * algorithms
 * Medium (56.76%)
 * Likes:    1855
 * Dislikes: 0
 * Total Accepted:    559.7K
 * Total Submissions: 985.9K
 * Testcase Example:  '[1,2,3,4,5]\n2\n4'
 *
 * 给你单链表的头指针 head 和两个整数 left 和 right ，其中 left  。请你反转从位置 left 到位置 right 的链表节点，返回
 * 反转后的链表 。
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：head = [1,2,3,4,5], left = 2, right = 4
 * 输出：[1,4,3,2,5]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：head = [5], left = 1, right = 1
 * 输出：[5]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 链表中节点数目为 n
 * 1 
 * -500 
 * 1 
 * 
 * 
 * 
 * 
 * 进阶： 你可以使用一趟扫描完成反转吗？
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
// @lc code=end

