/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode.cn/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (67.08%)
 * Likes:    3606
 * Dislikes: 0
 * Total Accepted:    1.8M
 * Total Submissions: 2.7M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：l1 = [], l2 = []
 * 输出：[]
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 两个链表的节点数目范围是 [0, 50]
 * -100 
 * l1 和 l2 均按 非递减顺序 排列
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
// @lc code=end

