// Last updated: 18/02/2026, 09:24:24
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
14 bool isMirror(TreeNode* n1, TreeNode* n2){
15    if(!n1 && !n2)
16    return true;
17    if(!n1 || !n2)
18    return false;
19
20    return n1->val==n2->val && isMirror(n1->left,n2->right)&& isMirror(n1->right,n2->left);
21 }
22    bool isSymmetric(TreeNode* root) {
23      
24        
25
26        
27
28        return isMirror(root->left,root->right);
29    }
30};