// Last updated: 22/08/2025, 23:52:17
class Solution {
    private:
    int most(vector<int>&nums,int k){
        int left=0,result=0,count=0;
        for(int right=0; right<nums.size(); right++){
            if(nums[right]%2!=0)
                count++;

            while(count>k){
            if(nums[left]%2 !=0)
                    count--;
                
                left++;
            }
            result+=right-left+1;
        }
            return result;
        
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return most(nums,k)-most(nums,k-1);
    }
};