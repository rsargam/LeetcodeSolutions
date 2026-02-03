// Last updated: 04/02/2026, 01:11:44
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
14    TreeNode* insertIntoBST(TreeNode* root, int val) {
15        if(!root)
16        return new TreeNode(val);
17        if(root->val>val){
18            root->left= insertIntoBST(root->left,val);
19        }
20        else{
21            root->right= insertIntoBST(root->right,val);
22        }
23        return root;
24    }
25};