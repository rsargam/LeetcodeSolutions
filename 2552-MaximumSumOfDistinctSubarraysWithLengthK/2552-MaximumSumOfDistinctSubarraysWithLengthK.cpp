// Last updated: 22/08/2025, 23:51:47
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       int left=0;
       long long sum=0,maxsum=0;
       unordered_map<int,int >freq;
       for(int r=0;r<nums.size();r++){
        freq[nums[r]]++;
            sum+=nums[r];

          
            while((r-left+1)>k){
                freq[nums[left]]--;
                sum-=nums[left];
            
            if(freq[nums[left]]==0)
                freq.erase(nums[left]);
            
            left++;
            }
            if((r-left+1)==k && freq.size()==k){
                maxsum=max(maxsum,sum);
            }
        
       }
       return maxsum;
    }
};