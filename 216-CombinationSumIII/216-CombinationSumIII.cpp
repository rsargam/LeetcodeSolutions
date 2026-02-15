// Last updated: 15/02/2026, 14:54:15
1class Solution {
2public:
3vector<vector<int>>res;
4void solve(int k,int target,int start,vector<int>&path){
5    if(target==0 && k==0){
6
7
8    res.push_back(path);
9    return;
10    }
11
12   for(int i=start;i<=9;i++){
13    if(i>target || k<=0)
14    break;
15    path.push_back(i);
16    solve(k-1,target-i,i+1,path);
17    path.pop_back();
18
19}
20
21}
22    vector<vector<int>> combinationSum3(int k, int n) {
23        vector<int>path;
24        solve(k,n,1,path);
25        return res;
26    }
27};