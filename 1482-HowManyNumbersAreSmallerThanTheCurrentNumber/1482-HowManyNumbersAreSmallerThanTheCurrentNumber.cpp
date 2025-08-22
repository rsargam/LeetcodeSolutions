// Last updated: 22/08/2025, 23:52:13
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
       

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            ans.push_back(count);

        }
        return ans;

    }           
};