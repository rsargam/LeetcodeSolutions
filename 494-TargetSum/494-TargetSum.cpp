// Last updated: 22/01/2026, 12:27:29
1class Solution {
2public:
3int findsum(int i,int sum,int target,vector<int>&nums){
4            if(i==nums.size())
5            return sum==target ? 1:0;
6
7            int add=findsum(i+1,sum+nums[i],target,nums);
8            int sub=findsum(i+1,sum-nums[i],target,nums);
9
10            return add+sub;
11            
12        }
13    int findTargetSumWays(vector<int>& nums, int target) {
14        return findsum(0,0,target,nums);
15    }
16};