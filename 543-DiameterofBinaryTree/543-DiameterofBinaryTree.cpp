// Last updated: 25/01/2026, 16:11:06
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
14int dia=0;
15int height(TreeNode* root){
16    if(!root)
17    return 0;
18
19    int left=height(root->left);
20    int right=height(root->right);
21
22    dia=max(dia,left+right);
23    return 1+ max(left,right);
24}
25    int diameterOfBinaryTree(TreeNode* root) {
26       height(root);
27        return dia;
28    }
29};