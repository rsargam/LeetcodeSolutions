// Last updated: 22/08/2025, 23:52:40
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int minimum=*min_element(nums.begin(),nums.end());
        int moves=0;
       for(int i=0;i<n;i++){
        moves+=nums[i]-minimum;
       }
       return moves;
    }
};