// Last updated: 22/08/2025, 23:52:21
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,len=0,flip=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]!=1){
               
                flip++;
            }
            while(flip>k){
                if(nums[left]!=1){
                    flip--;
                    
                }
                left++;
            }
            len=max(len,r-left+1);
        }
        return len;
    }
};