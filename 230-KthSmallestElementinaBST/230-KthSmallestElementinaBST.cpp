// Last updated: 26/01/2026, 14:03:16
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
14    void inorder(TreeNode* root,int &ans,int &k){
15        if(!root)
16        return ;
17        inorder(root->left,ans,k);
18        k--;
19        if(k==0){
20             ans=root->val;
21        return;
22        }
23       
24
25        inorder(root->right,ans,k);
26    }
27    int kthSmallest(TreeNode* root, int k) {
28        int ans=0;
29        inorder(root,ans,k);
30        return ans;
31    }
32};