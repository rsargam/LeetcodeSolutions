// Last updated: 01/02/2026, 00:00:39
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
13    
14public:
15    void flatten(TreeNode* root) {
16        while(root){
17          if(!root->left)
18            root=root->right;
19          else
20          {
21             TreeNode* curr=root->left;
22             while(curr->right){
23                curr=curr->right;
24             }
25            curr->right=root->right;
26            root->right=root->left;
27            root->left=NULL;
28            root=root->right;
29             
30          }   
31        }
32    }
33};