// Last updated: 22/08/2025, 23:52:07
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }
        return res;

        
    }
};