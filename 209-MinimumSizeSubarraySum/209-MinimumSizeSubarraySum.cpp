// Last updated: 22/08/2025, 23:53:05
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0,sum=0,length=n+1;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                length=min(length,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(length==n+1)
        return 0;
        else
        return length;


    }
};