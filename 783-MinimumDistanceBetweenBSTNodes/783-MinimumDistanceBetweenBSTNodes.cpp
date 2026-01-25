// Last updated: 25/01/2026, 23:21:07
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
13    void dis(TreeNode* root,int &prev,int &ans){
14        if(!root)
15        return;
16
17        dis(root->left,prev,ans);
18        if(prev!=INT_MIN)
19        ans=min(ans,root->val-prev);
20        prev=root->val;
21        dis(root->right,prev,ans);
22    }
23public:
24    int minDiffInBST(TreeNode* root) {
25        int prev=INT_MIN;
26        int ans=INT_MAX;
27        dis(root,prev,ans);
28        return ans;
29    }
30};