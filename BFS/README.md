



### 广度优先遍历(BFS)

#### P0101★

题目描述：  [Symmetric Tree](https://leetcode.cn/problems/symmetric-tree/), 判断一棵树是不是对称树

##### 思路

```bash
      [1]
      /  \
     /     \ 
   [1]     [1]
   / \     / \
 [1] [1] [1] [1]
```

1. 广度优先遍历：往队列中Push元素，最开始两个元素是树的根节点
2. 使用队列，按照树的对称位置顺序，输入每一层的节点TreeNode，保证队列的前两个节点总是一双对称位置的节点

3. 不是对称树的情况：对称节点中有一个为空(nullptr) 或者 两节点的值(value)不相等

4. 继续入队，将这两个节点的子节点按照 1423 对称序Push到队列中

##### 总结

```cpp
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
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }
    
    bool check(TreeNode* u, TreeNode* v){
        //创建队列并且压入前两个节点
        queue<TreeNode*> q;
        q.push(u);
        q.push(v);
        //遍历队列进行判断
        while(!q.empty()){
            //取出一双对称位置节点
            u = q.front();
            q.pop();
            v = q.front();
            q.pop();
            //判断对称性
            if(!u && !v) continue;
        	if((!u || !v) || (u->val != v->val)) return false;
            //将子节点按照对称序入队
            q.push(u->left);
            q.push(v->right);
            q.push(u->right);
            q.push(v->lefy);
        }
        return true;
    }
};
```



#### P0102★

题目描述：[ Binary Tree Level Order Traversal](https://leetcode.cn/problems/binary-tree-level-order-traversal/)，对一颗二叉树进行层序遍历

##### 思路

```bash
      [3]
      /  \
     /     \ 
   [9]     [2]
           / \
         [4] [7]
```

使用队列的广度优先遍历思想，将每一层的节点入队，在将该层节点的数值插入到vector当中去

##### 总结

```cpp
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
```

#### P0103★

题目描述：[Binary Tree Zigzag Level Order Traversal](https://leetcode.cn/problems/binary-tree-zigzag-level-order-traversal/), 锯齿层序遍历

##### 思路

```bash
      [3]
      /  \
     /     \ 
   [9]     [20]
           /  \
        [15]  [7]
```

一开始尝试使用普通队列，但是行不通

正确的做法是使用双端队列和一个bool标记进行遍历

##### 总结

```cpp
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        dqueue<TreeNode*> q;
        q.push_back(root);
        //forward的默认值应该是false
        bool forward = false;
        while(!q.empty()){
            //构建每一层的vec和dequeue
            vector<int> vec;
            deque<TreeNode*> nq;
            while(!q.empty()){
                TreeNode* u = q.front();
                q.pop_front();
                if( u != nullptr && forward == true){
                    vec.push_back(u->val);
                    nq.push_front(u->left);
                    nq.push_front(u->right);
                }
                if( u != nullptr && forward == false){
                    vec.push_back(u->val);
                    nq.push_back(u->left);
                    nq.push_back(u->right);
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
};
```















#### P00★

题目描述：

##### 思路

##### 总结