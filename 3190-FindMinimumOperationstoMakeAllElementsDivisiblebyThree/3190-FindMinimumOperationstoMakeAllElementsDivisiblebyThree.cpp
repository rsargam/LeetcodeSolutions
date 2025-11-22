// Last updated: 23/11/2025, 00:12:16
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1){
                op++;
            }
            else if(nums[i]%3==2){
                op++;
            }
        }
        return op;
    }
};