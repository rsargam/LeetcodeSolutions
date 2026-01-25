// Last updated: 25/01/2026, 08:50:44
1class Solution {
2public:
3    int minimumPrefixLength(vector<int>& nums) {
4        int n=nums.size();
5        int start=n-1;
6        for(int i=n-2;i>=0;i--){
7            if (nums[i]<nums[i+1]){
8                start=i;
9            }
10            else 
11                break;
12        }
13        return start;
14    }
15};