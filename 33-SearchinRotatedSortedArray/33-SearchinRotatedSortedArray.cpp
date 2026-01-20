// Last updated: 20/01/2026, 10:46:03
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0,high=nums.size()-1;
5        while(low<=high){
6            int mid=low+(high-low)/2;
7            if(target==nums[mid])
8            return mid;
9            if(nums[low]<=nums[mid]){
10                if(target<nums[mid] && target>=nums[low])
11                high=mid-1;
12                else
13                low=mid+1;
14            }
15            else if(nums[high]>=nums[mid]){
16                if(target>nums[mid] && target<=nums[high])
17                low=mid+1;
18                else 
19                high=mid-1;
20            }
21            
22        }
23        return -1;
24    }
25};