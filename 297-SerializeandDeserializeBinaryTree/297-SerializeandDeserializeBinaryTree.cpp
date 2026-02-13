// Last updated: 14/02/2026, 01:23:12
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Codec {
11public:
12
13    // Encodes a tree to a single string.
14    string serialize(TreeNode* root) {
15        if(!root)
16        return "";
17        string result="";
18        queue<TreeNode*>q;
19        q.push(root);
20        while(!q.empty()){
21            TreeNode* node=q.front();
22            q.pop();
23            if(node){
24                result+=to_string(node->val) + ",";
25                q.push(node->left);
26                q.push(node->right);
27            }
28            else{
29             result+="null,";
30            }
31        }
32        result.pop_back();
33        return result;
34    }
35
36    // Decodes your encoded data to tree.
37    TreeNode* deserialize(string data) {
38        if(data.empty())
39        return nullptr;
40
41        stringstream ss(data);
42        string item;
43        getline(ss,item,',');
44        if(item=="null" || item.empty())
45        return nullptr;
46
47        TreeNode* root= new TreeNode(stoi(item));
48        queue<TreeNode*>q;
49        q.push(root);
50        while(!q.empty()){
51            TreeNode* node=q.front();
52            q.pop();
53
54            if(!getline(ss,item,','))
55                break;
56            if(item!="null" && !item.empty()){
57                node->left=new TreeNode (stoi(item));
58                q.push(node->left);
59            }
60
61            if(!getline(ss,item,','))
62                break;
63            if(item!="null" && !item.empty()){
64                node->right=new TreeNode(stoi(item));
65                q.push(node->right);
66            }
67                
68                
69
70                                              
71        }
72        return root;
73    }
74};
75
76// Your Codec object will be instantiated and called as such:
77// Codec ser, deser;
78// TreeNode* ans = deser.deserialize(ser.serialize(root));