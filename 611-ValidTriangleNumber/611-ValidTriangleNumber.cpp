// Last updated: 29/09/2025, 10:43:43
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
       for(int i=n-1;i>=2;i--){
        int left=0,right=i-1;
        while(left<right){
       if( nums[right]+ nums[left]>nums[i]){
        count+=(right - left);
        right--;
       }
       else{
        left++;
       }
    }
       }
       return count;
    }
};