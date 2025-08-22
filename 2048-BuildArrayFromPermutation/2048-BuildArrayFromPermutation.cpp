// Last updated: 22/08/2025, 23:51:57
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       int n=nums.size();
       vector<int>ans(n);
       for(int i=0;i<n;i++){
        ans[i]=nums[nums[i]];
       

       } 
       return ans;
    }
};