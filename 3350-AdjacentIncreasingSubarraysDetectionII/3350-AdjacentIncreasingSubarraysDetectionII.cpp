// Last updated: 15/10/2025, 06:35:20
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int up=1,pre=0,res=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
            up++;
            else{
                pre=up;
                up=1;
            }
            int half=up>>1;
            int m=min(pre,up);
            int cand=max(half,m);
            if(cand>res)res=cand;
        }
        return res;
    }
};