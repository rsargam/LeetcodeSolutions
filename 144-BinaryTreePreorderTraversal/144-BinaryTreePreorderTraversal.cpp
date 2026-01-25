// Last updated: 25/01/2026, 13:11:01
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
13    void help(TreeNode* root,vector<int>&result){
14        if(!root)
15        return;
16         result.push_back(root->val);
17         help(root->left,result);
18         help(root->right,result);
19    }
20public:
21    vector<int> preorderTraversal(TreeNode* root) {
22        vector<int>ans;
23        help(root,ans);
24        return ans;
25    }
26};