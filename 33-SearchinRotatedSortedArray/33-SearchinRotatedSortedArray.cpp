// Last updated: 20/01/2026, 10:31:26
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size();
5        int start=0;
6        int end =n-1;
7       
8        while(start<=end){
9            const int mid= start + (end - start) / 2;
10            if(nums[mid]==target){
11                return mid;
12            }
13            if(nums[start]<=nums[mid]){
14                if(nums[start]<=target && target<nums[mid]){
15                    end=mid-1;
16                }
17                else
18                start=mid+1;
19            }
20            else{
21                if(nums[mid]<target && target<=nums[end]){
22                    start=mid+1;
23                }
24                else {
25                    end=mid-1;
26                }
27            }
28        }
29        return -1;
30    }
31};