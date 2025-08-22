// Last updated: 22/08/2025, 23:52:15
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        
        auto calculateSum = [&](int divisor) {
            int sum = 0;
            for (int num : nums) {
                sum += (num + divisor - 1) / divisor; 
            }
            return sum;
        };
        
       
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (calculateSum(mid) <= threshold) {
                right = mid; 
            } else {
                left = mid + 1; 
        }
        
      
    }
      return left;
    } 
};