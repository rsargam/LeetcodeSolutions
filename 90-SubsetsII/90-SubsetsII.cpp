// Last updated: 22/01/2026, 10:48:47
1class Solution {
2public:
3    vector<int>temp;
4    vector<vector<int>>ans;
5    void backtrack(int index,vector<int>&nums){
6        ans.push_back(temp);
7        for(int i=index;i<nums.size();i++){
8             if(i>index && nums[i]==nums[i-1])
9            continue;
10            
11            temp.push_back(nums[i]);
12            backtrack(i+1,nums);
13            temp.pop_back();
14        }
15    }
16
17    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
18        sort(nums.begin(),nums.end());
19        backtrack(0,nums);
20        return ans;
21    }
22};