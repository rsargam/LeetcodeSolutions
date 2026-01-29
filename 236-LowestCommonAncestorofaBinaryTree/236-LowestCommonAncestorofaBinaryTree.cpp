// Last updated: 29/01/2026, 22:31:10
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root==NULL || root==p || root==q)
14        return root;
15
16           TreeNode* left= lowestCommonAncestor(root->left,p,q);
17           TreeNode* right=lowestCommonAncestor(root->right,p,q);
18        if(left && right)
19          return root;
20        if(left!=NULL)
21          return left;
22        else
23          return right;
24    }
25};