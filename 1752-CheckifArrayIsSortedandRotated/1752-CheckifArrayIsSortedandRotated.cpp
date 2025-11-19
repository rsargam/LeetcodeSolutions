// Last updated: 20/11/2025, 00:36:31
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n])
                count++;   
    }
     return count<=1;
    }
};