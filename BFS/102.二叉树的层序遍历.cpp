class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ret;
        q.push(root);
        while(!q.empty()){
            //每一层节点的读取，放入到一个vector<int>当中去
            //同时构建下一层节点的元素到nq当中去
            vector<int> vec;
            queue<TreeNode*> nq;
            while(!q.empty()){
                TreeNode* u = q.front();
                q.pop();
                if(u != nullptr){
                    vec.push_back(u->val);
                	nq.push(u->left);
                    nq.push(u->right);
                }
            }//到这里，nq构建完成，vec也存储完成
            if(!vec.empty()){
                ret.push_back(vec);
                vec.clear();
            }
            q = nq;
        }
        return ret;
    }
};