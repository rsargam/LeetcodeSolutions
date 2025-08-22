// Last updated: 22/08/2025, 23:53:58
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
           
            
        }
        return i;
    }
};