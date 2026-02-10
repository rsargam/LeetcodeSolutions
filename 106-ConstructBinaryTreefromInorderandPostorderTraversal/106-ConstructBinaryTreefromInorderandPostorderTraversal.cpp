// Last updated: 10/02/2026, 19:33:12
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
14TreeNode* solve(vector<int>inorder,vector<int>postorder,int start,int end,int &index){
15    if(start>end || index<0)
16    return NULL;
17    int n=postorder.size();
18    int rootval=postorder[index--];
19    int i=start;
20
21    for(;i<=end;i++){
22        if(rootval==inorder[i])
23        break;
24 
25    }
26    
27    TreeNode* root=new TreeNode(rootval);
28    root->right=solve(inorder,postorder,i+1,end,index);
29    root->left=solve(inorder,postorder,start,i-1,index);
30    return root;
31
32
33
34
35
36
37}
38    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
39        int n=postorder.size();
40        int index=n-1;
41        return solve(inorder,postorder,0,n-1,index);
42    }
43};