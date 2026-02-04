// Last updated: 04/02/2026, 20:17:05
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
14    TreeNode* deleteNode(TreeNode* root, int key) {
15        if(!root)
16        return NULL;
17
18        if(key<root->val)
19        root->left=deleteNode(root->left,key);
20
21        else if(key>root->val)
22        root->right=deleteNode(root->right,key);
23
24        else{
25            if(!root->left)
26            return root->right;
27            if(!root->right)
28            return root->left;
29
30            TreeNode* succ=root->right;
31            while(succ->left)
32            succ=succ->left;
33
34            root->val=succ->val;
35            root->right=deleteNode(root->right,succ->val);
36
37        }
38        return root;
39    }
40};