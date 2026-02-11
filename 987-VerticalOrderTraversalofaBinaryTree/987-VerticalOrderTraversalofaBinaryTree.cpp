// Last updated: 11/02/2026, 18:07:58
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
14map<int,map<int,multiset<int>>>nodes;
15
16void dfs(TreeNode* root,int row,int col){
17    if(!root)
18    return;
19
20nodes[col][row].insert(root->val);
21dfs(root->left,row+1,col-1);
22dfs(root->right,row+1,col+1);
23}
24    vector<vector<int>> verticalTraversal(TreeNode* root) {
25        dfs(root,0,0);
26        vector<vector<int>>ans;
27        for(auto &colpairs:nodes){
28            vector<int>col;
29        
30        for(auto &rowpair: colpairs.second){
31            col.insert(col.end(),
32             rowpair.second.begin(),
33            rowpair.second.end());
34        }
35        ans.push_back(col);
36        }
37        return ans;
38    }
39};