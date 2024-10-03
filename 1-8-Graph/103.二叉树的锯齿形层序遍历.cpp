/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        deque<TreeNode*> q;
        q.push_back(root);
        bool forward = false;
        while( !q.empty() ){
            vector<int> vec;
            deque<TreeNode*> nq;
            while( !q.empty() ){
                TreeNode* u = q.front();
                q.pop_front();
                if( u != nullptr && forward == true){
                    vec.push_back(u->val);
                    nq.push_front(u->right);
                    nq.push_front(u->left);
                }
                if( u != nullptr && forward == false){
                    vec.push_back(u->val);
                    nq.push_front(u->left);
                    nq.push_front(u->right);
                }
            }
            forward = !forward;
            if(!vec.empty()){
                ret.push_back(vec);
                vec.clear();
            }
            q = nq;
        }
        return ret;
    }
};
// @lc code=end

