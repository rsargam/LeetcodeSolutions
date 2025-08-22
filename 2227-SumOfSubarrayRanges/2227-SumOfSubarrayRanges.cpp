// Last updated: 22/08/2025, 23:51:49
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
       
        long long result=0;
        for(int i=0;i<n;i++){
            int minV=nums[i];
            int maxV=nums[i];
            for(int j=i+1;j<n;j++){
              maxV=max(maxV,nums[j]);
              minV=min(minV,nums[j]);
               result+=maxV-minV;
            }
        }
        return result;
    }
};