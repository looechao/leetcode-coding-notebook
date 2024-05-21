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
    struct ListNode* start = head;
    bool pos_arr[101];
    bool neg_arr[101];
    for(int i =0; i < 101; i++){
        pos_arr[i] = false;
        neg_arr[i] = false;
    }
    if(!head){
        return start;
    }
    if(head->val >= 0){
        pos_arr[head->val] = true;
    }else{
        neg_arr[abs(head->val)] =true;
    }

    while(head->next){
        //移动扫描
        if(head->next->val > 0){
            if (pos_arr[])
        }
    }
    return start;
}
// @lc code=end

