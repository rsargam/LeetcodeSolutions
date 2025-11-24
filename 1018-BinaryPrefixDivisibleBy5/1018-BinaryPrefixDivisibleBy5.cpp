// Last updated: 24/11/2025, 09:17:09
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>result(nums.size());
        int check=0;
        for(int i=0;i<nums.size();i++){
            check=(check*2+nums[i])%5;
            result[i]=(check==0);
        }
        return result;
    }
};