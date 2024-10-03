/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
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
// @lc code=end

