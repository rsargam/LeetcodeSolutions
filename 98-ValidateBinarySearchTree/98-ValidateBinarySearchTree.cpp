// Last updated: 05/02/2026, 19:34:49
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
16    return ;
17
18    inorder(ans,root->left);
19    ans.push_back(root->val);
20    inorder(ans,root->right);
21}
22   
23    bool isValidBST(TreeNode* root) {
24       vector<int>ans;
25       inorder(ans,root);
26       for(int i=1;i<ans.size();i++){       
27        if(ans[i]<=ans[i-1])
28        return false;
29       }
30       return true;
31
32    }
33};