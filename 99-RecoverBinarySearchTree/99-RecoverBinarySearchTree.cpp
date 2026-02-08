// Last updated: 08/02/2026, 23:03:01
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
14TreeNode* prev=nullptr;
15TreeNode* first=nullptr;
16TreeNode* second=nullptr;
17
18void inorder(TreeNode* root){
19    if(!root)
20    return;
21
22    inorder(root->left);
23    if(prev && prev->val>root->val){
24        if(!first)
25        first=prev;
26        second=root;
27    }
28    prev=root;
29    inorder(root->right);
30}
31    void recoverTree(TreeNode* root) {
32        inorder(root);
33        swap(first->val,second->val);
34    }
35};