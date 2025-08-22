// Last updated: 22/08/2025, 23:53:59
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
           
        }
        return i+1; 
    }
};