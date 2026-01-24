// Last updated: 24/01/2026, 11:04:08
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        queue<TreeNode*>q;
16        q.push(root);
17        vector<vector<int>>result;
18       
19        TreeNode* temp;
20        if(root==nullptr)
21        return result;
22        while(!q.empty()){
23             vector<int>ans;
24             int n=q.size();
25            for(int i=0;i<n;i++){
26            temp=q.front();
27            q.pop();
28            ans.push_back(temp->val);
29            
30            if(temp->left)
31            q.push(temp->left);
32            if(temp->right)
33            q.push(temp->right);
34           
35             }
36              result.push_back(ans);
37        }
38        return result;
39    }
40};