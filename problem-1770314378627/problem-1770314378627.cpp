// Last updated: 05/02/2026, 23:29:38
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
14void inorder(vector<int>&ans,TreeNode* root){
15    if(!root)
16    return;
17    inorder(ans,root->left);
18    ans.push_back(root->val);
19    inorder(ans,root->right);
20}
21    bool findTarget(TreeNode* root, int k) {
22        vector<int>ans;
23
24        inorder(ans,root);
25        for(int i=0;i<ans.size();i++){
26            for(int j=i+1;j<ans.size();j++){
27                if(ans[i]+ans[j]==k)
28                return true;
29            }
30        }
31        return false;
32    }
33};