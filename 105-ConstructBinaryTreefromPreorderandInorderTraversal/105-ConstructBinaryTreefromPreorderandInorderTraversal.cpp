// Last updated: 10/02/2026, 19:09:53
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
14TreeNode* solve(vector<int>&inorder,vector<int>&preorder,int start,int end, int &index){
15    if(start>end || index>preorder.size())
16    return NULL;
17    int rootval=preorder[index];
18    int i=start;
19    for(i=start;i<=end;i++){
20        if(inorder[i]==rootval)
21        break;
22
23    }
24    index++;
25    TreeNode* root=new TreeNode(rootval);
26    root->left=solve(inorder,preorder,start,i-1,index);
27    root->right=solve(inorder,preorder,i+1,end,index);
28    return root;
29}
30    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
31        int n=preorder.size();
32        int index=0;
33        return solve(inorder,preorder,0,n-1,index);
34    }
35};