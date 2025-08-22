// Last updated: 22/08/2025, 23:53:24
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int lastsmaller=INT_MIN;
        int count=0;
        int longest=0;

        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                count++;
                lastsmaller=nums[i];
            }
            else if(nums[i]!=lastsmaller){
                count=1;
                lastsmaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }

};