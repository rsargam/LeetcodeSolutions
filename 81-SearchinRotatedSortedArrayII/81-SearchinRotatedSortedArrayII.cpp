// Last updated: 20/01/2026, 10:58:20
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        int low=0,high=nums.size()-1;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            if(nums[mid]==target)
8            return true;
9            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
10                low=low+1;
11                high=high-1;
12                continue;
13            }
14            else if(nums[low]<=nums[mid]){
15                if(target<nums[mid] && target>=nums[low])
16                high=mid-1;
17                else
18                low=mid+1;
19            }
20            else if(nums[high]>=nums[mid]){
21                if(target>nums[mid] && target<=nums[high])
22                low=mid+1;
23                else 
24                high=mid-1;
25            }  
26        }
27        return false;
28    }
29};