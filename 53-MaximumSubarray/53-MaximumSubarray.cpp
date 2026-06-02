// Last updated: 02/06/2026, 14:47:25
1class Solution {
2public:
3    int maxSubArray(vector<int>&nums) {
4        int n=nums.size();
5        int sum=0, maxi=INT_MIN;
6        for(int i=0;i<n;i++){
7            sum+=nums[i];
8           maxi=max(sum,maxi);
9            
10            if(sum<0)
11            sum=0;
12        }
13        return maxi;
14        
15    }
16};
17