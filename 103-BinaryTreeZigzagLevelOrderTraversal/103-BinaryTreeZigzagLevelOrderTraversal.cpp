// Last updated: 27/01/2026, 00:16:25
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
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        vector<vector<int>>result;
16        if(!root)
17        return result;
18        
19        queue<TreeNode*>q;
20        q.push(root);
21        bool lefttoright=true;
22
23        while(!q.empty()){
24            int n=q.size();
25            vector<int>row(n);
26            for(int i=0;i<n;i++){
27                TreeNode* root=q.front();
28                q.pop();
29
30                int index=(lefttoright) ? i : (n-1-i);
31                row[index]=root->val;
32                if(root->left)
33                q.push(root->left);
34                if(root->right)
35                q.push(root->right);
36            }
37            lefttoright=!lefttoright;
38            result.push_back(row);
39        }
40        return result;
41    }
42};