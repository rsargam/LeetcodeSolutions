// Last updated: 22/08/2025, 23:52:50
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow=nums[0];
       int fast=nums[0];
       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       }
        while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];      
              }
              return slow;
       }
       
    
};