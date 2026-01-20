// Last updated: 20/01/2026, 11:40:58
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low=0,high=nums.size()-1;
5        while(low<high){
6            int mid=low+(high-low)/2;
7            if (nums[mid]>nums[high]){
8                low=mid+1;
9            }
10            else
11            high=mid;
12        }
13        return nums[low];
14    }
15};