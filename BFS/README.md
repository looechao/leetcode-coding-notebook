



### 广度优先遍历(BFS)

#### P0101★

题目描述：Symmetric Tree, 判断一棵树是不是对称树

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













#### P00★

题目描述：

##### 思路

##### 总结