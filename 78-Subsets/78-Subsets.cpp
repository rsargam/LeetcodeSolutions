// Last updated: 17/02/2026, 23:03:20
1class Solution {
2public:
3 vector<vector<int>>ans;
4        vector<int>temp;
5        void backtrack(int index,vector<int>&nums){
6            ans.push_back(temp);
7            for(int i=index;i<nums.size();i++){
8                temp.push_back(nums[i]);
9                backtrack(i+1,nums);
10                temp.pop_back();
11            }
12        }
13    vector<vector<int>> subsets(vector<int>& nums) {
14       backtrack(0,nums);
15       return ans;
16
17    }
18};