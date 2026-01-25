// Last updated: 25/01/2026, 13:28:32
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
16        
17         help(root->left,result);
18         help(root->right,result);
19          result.push_back(root->val);
20    }
21public:
22    vector<int> postorderTraversal(TreeNode* root) {
23        vector<int>result;
24        help(root,result);
25        return result;
26    }
27};