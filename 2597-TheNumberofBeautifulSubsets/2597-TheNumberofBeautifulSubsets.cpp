// Last updated: 31/03/2026, 12:13:27
1class Solution {
2public:
3int result;
4int K;
5
6void solve(int idx,vector<int>&nums,unordered_map<int,int>&mp){
7    if(idx>=nums.size()){
8        result++;
9        return;
10    }
11    solve(idx+1,nums,mp);
12    if(!mp[nums[idx]-K] && !mp[nums[idx]+K]){
13    
14mp[nums[idx]]++;
15solve(idx+1,nums,mp);
16mp[nums[idx]]--;
17    }
18}
19    int beautifulSubsets(vector<int>& nums, int k) {
20        result=0;
21        K=k;
22        unordered_map<int,int>mp;
23        solve(0,nums,mp);
24        return result-1;
25    }
26};