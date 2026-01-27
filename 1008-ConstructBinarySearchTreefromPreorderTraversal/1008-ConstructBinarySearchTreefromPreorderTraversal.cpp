// Last updated: 28/01/2026, 00:08:02
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* bst(vector<int>&preorder,int &index,int lower,int upper){
15
16        if(index==preorder.size() || lower>preorder[index] || upper<preorder[index])
17        return NULL;
18        TreeNode* root=new TreeNode(preorder[index++]);
19        root->left=bst(preorder,index,lower,root->val);
20        root->right=bst(preorder,index,root->val,upper);
21        return root;
22    }
23    TreeNode* bstFromPreorder(vector<int>& preorder) {
24        int index=0;
25        return bst(preorder,index,INT_MIN,INT_MAX);
26    }
27};