// Last updated: 10/09/2025, 23:54:07
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int i = 0, j;
        long sum=0;
        sort(nums.begin(), nums.end());
        for (j = 0; j < nums.size(); ++j) {
        sum += nums[j];
            if (k+sum < (long)nums[j] * (j - i + 1))
                sum -= nums[i++];
        }
        return j - i;
    }
};