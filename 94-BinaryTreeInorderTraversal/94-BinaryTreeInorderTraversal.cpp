// Last updated: 17/12/2025, 16:43:00
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
14    vector<int> inorderTraversal(TreeNode* root) {
15        vector<int>result;
16        inorder(root,result);
17        return result;
18    }
19     void inorder(TreeNode* root,vector<int>&result){
20        if(!root)
21        return;
22
23        inorder(root->left,result);
24        result.push_back(root->val);
25        inorder(root->right,result);
26    }
27};