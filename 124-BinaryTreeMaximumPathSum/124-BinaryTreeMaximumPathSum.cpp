// Last updated: 12/02/2026, 10:56:13
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
14int dfs(TreeNode* node,int &res){
15    if(!node)
16    return 0;
17
18    int leftsum=max(0,dfs(node->left,res));
19    int rightsum=max(0,dfs(node->right,res));
20    res=max(res,leftsum+rightsum+node->val);
21
22    return max(leftsum,rightsum)+node->val;
23}
24    int maxPathSum(TreeNode* root) {
25        int res=root->val;
26        dfs(root,res);
27        return res;
28    }
29};