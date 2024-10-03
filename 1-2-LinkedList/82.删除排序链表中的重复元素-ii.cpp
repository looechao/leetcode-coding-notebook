/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 *
 * https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/description/
 *
 * algorithms
 * Medium (54.65%)
 * Likes:    1322
 * Dislikes: 0
 * Total Accepted:    476.7K
 * Total Submissions: 872.3K
 * Testcase Example:  '[1,2,3,3,4,4,5]'
 *
 * 给定一个已排序的链表的头 head ， 删除原始链表中所有重复数字的节点，只留下不同的数字 。返回 已排序的链表 。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [1,2,3,3,4,4,5]
 * 输出：[1,2,5]
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [1,1,1,2,3]
 * 输出：[2,3]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点数目在范围 [0, 300] 内
 * -100 <= Node.val <= 100
 * 题目数据保证链表已经按升序 排列
 *
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
                while (cur && cur->val == nxt->val)
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
// @lc code=end
