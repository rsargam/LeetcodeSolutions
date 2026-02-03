// Last updated: 03/02/2026, 23:20:24
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
14    TreeNode* searchBST(TreeNode* root, int val) {
15        if(!root || root->val==val){
16            return root;
17        }
18        if(val<root->val){
19            return searchBST(root->left,val);
20        }
21        else 
22            return searchBST(root->right,val);
23        
24       
25    }
26};