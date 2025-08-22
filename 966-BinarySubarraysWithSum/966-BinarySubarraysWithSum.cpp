// Last updated: 22/08/2025, 23:52:23
class Solution {
    private:
    int atmost(vector<int>&nums,int k){
        if(k<0)
        return 0;
        int left=0,count=0,sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(k<sum){
                sum-=nums[left++];
            }
            count+=right-left+1;

        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};