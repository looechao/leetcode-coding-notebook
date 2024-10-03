/*
 * @lc app=leetcode.cn id=98 lang=c
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root) {
    if(!root){
        return true;
    }
    bool l = isValidBST(root->left);
    bool mid = 1;
    if(!root->left && root->right){
        mid = root->val < root->right;
    }
    if(root->left && !root->right){
        mid = root->left->val < root->val;
    }
    if(root->left && root->right){
        mid = root->left->val < root->val && root->val < root->right ;
    }
    if(!root->right && !root->left){
        mid = 1;
    }
    bool r = isValidBST(root->right);
    return mid && l && r;
}
// @lc code=end

