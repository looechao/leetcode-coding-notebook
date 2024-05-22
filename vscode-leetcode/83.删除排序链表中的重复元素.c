/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head){
        return head;
    }

    struct ListNode* curr = head;

    while(curr->next){
        if(curr->val == curr->next->val){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
    }

    return head;
}
// @lc code=end

