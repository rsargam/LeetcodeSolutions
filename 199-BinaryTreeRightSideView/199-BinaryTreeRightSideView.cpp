// Last updated: 29/01/2026, 16:17:43
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
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int>ans;
16        if(!root)
17        return ans;
18
19        queue<TreeNode*>q;
20        q.push(root);
21
22        while(!q.empty()){
23            int size=q.size();
24           
25            for(int i=0;i<size;i++){
26                 TreeNode* node=q.front();
27                    q.pop();
28                    if(i==size-1){
29                        ans.push_back(node->val);
30                    }
31
32                    if(node->left)
33                    q.push(node->left);
34
35                    if(node->right)
36                    q.push(node->right);
37            
38            }
39        }
40        return ans;
41
42
43    }
44};