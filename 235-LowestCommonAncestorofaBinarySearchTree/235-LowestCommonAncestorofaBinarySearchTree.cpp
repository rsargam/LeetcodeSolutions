// Last updated: 09/02/2026, 14:50:00
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14       
15while(root!=nullptr){
16
17
18
19        if(p->val< root->val && q->val< root->val){
20            root=root->left;
21        }
22        else if(p->val>root->val && q->val>root->val){
23            root=root->right;
24                   
25        }
26        else{
27            return root;
28
29        }
30        }
31        return nullptr;
32    }
33};