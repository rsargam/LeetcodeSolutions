// Last updated: 02/06/2026, 12:14:19
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n=nums.size();
5        int sum=(n*(n+1))/2;
6        int originalsum=0;
7        for(int num :nums){
8            originalsum +=num;
9        }
10        return sum-originalsum;
11    }
12};