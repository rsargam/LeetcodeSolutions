// Last updated: 14/02/2026, 23:05:45
1class Solution {
2public:
3
4void solve(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
5    if(target==0){
6        ans.push_back(ds);
7        return;
8    }
9    for(int i=index;i<arr.size();i++){
10        if(i>index && arr[i]==arr[i-1])
11        continue;
12        if(arr[i]>target)
13        break;
14        ds.push_back(arr[i]);
15        solve(i+1,target-arr[i],arr,ans,ds);
16        ds.pop_back();
17    }
18}
19    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
20        sort(candidates.begin(),candidates.end());
21        vector<vector<int>>ans;
22        vector<int>ds;
23        solve(0,target,candidates,ans,ds);
24        return ans;
25    }
26};