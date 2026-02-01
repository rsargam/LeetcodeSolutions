// Last updated: 01/02/2026, 12:19:14
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
14    typedef unsigned long long ll;
15    int widthOfBinaryTree(TreeNode* root) {
16        if(!root)
17        return 0 ;
18
19        queue<pair<TreeNode* ,ll>>q;
20        q.push({root,0});
21        ll maxwidth=0;
22
23        while(!q.empty()){
24            ll L=q.front().second;
25            ll R=q.back().second;
26        
27        maxwidth=max(maxwidth,R-L+1);
28        int n=q.size();
29        while(n--){
30            TreeNode* curr=q.front().first;
31            ll index=q.front().second;
32            q.pop();
33
34            if(curr->left)
35            q.push({curr->left,2*index+1});
36            if(curr->right)
37            q.push({curr->right,2*index+2});
38        }
39     }
40        return (int)maxwidth;
41
42    }
43};