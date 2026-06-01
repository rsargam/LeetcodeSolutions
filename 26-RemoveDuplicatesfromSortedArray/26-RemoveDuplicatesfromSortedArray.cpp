// Last updated: 01/06/2026, 23:32:41
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n=nums.size();
5        int count=0;
6        for(int i=1;i<n;i++){
7            if(nums[count]!=nums[i]){
8                count++;
9                nums[count]=nums[i];
10            }
11        }
12        return count+1;
13    }
14};