// Last updated: 22/09/2025, 06:09:47
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int maxf=0,ans=0;
        for(auto i:count){
            if(i.second>maxf){
                maxf=i.second;
            }
        }
        for(auto i:count){
            if(i.second==maxf){
                ans+=i.second;
            }
        }
        return ans;
    }
};