// Last updated: 22/08/2025, 23:53:16
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;
             if (nums[mid] < nums[(mid + n - 1) % n] && nums[mid] < nums[(mid + 1) % n]) {
                return nums[mid];
            }
            
            if(nums[start]<=nums[mid]){
                ans= min(ans,nums[start]);
                start=mid+1;
            }
            else{
                ans= min(ans,nums[start]);
                end=mid-1;
            }
        }
        return ans;
    }
};