// Last updated: 22/08/2025, 23:53:22
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            count^=nums[i];           
        }
        return count;
        
    }
};