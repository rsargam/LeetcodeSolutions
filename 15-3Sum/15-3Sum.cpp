// Last updated: 23/11/2025, 11:12:07
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
        int n=nums.size();
        int sum=0;
        int i;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            
        }
        unordered_set<int>seen;
        for(int j=i+1;j<n;j++){
            int complement=-nums[i]-nums[j];
            if(seen.find(complement)!=seen.end()){
                 ans.push_back({nums[i], nums[j], complement});

                 while(j+1<n && nums[j]==nums[j+1]){
                j++;
            }
           
            }
            seen.insert(nums[j]);
        }
        }
        return ans;

    }
};