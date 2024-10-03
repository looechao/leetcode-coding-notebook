/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 *
 * https://leetcode.cn/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (54.13%)
 * Likes:    1158
 * Dislikes: 0
 * Total Accepted:    729.2K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：head = [1,1,2]
 * 输出：[1,2]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：head = [1,1,2,3,3]
 * 输出：[1,2,3]
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
// @lc code=end

