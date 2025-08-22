// Last updated: 22/08/2025, 23:53:33
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;
        int count=1;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }

            if(count<=2){
                nums[len]=nums[i];
                len++;
            }
        }
        return len;
    }
};