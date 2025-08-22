// Last updated: 22/08/2025, 23:52:53
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int sum_orig = 0;
        
     
        for (int num : nums) {
            sum_orig += num;
        }
        
    
        return sum - sum_orig;
    }
};