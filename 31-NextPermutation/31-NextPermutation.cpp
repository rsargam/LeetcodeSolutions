// Last updated: 22/08/2025, 23:53:55
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        if(i>=0){
            int j=n-1;
            while(nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+1+i,nums.end());
    }
};