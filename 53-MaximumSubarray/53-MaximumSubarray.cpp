// Last updated: 02/06/2026, 14:37:01
1class Solution {
2public:
3    int maxSubArray(vector<int>&nums) {
4        int n=nums.size();
5        int sum=0, max=INT_MIN;
6        for(int i=0;i<n;i++){
7            sum+=nums[i];
8            if(sum>max)
9            max=sum;
10            if(sum<0)
11            sum=0;
12        }
13        return max;
14        
15    }
16};
17