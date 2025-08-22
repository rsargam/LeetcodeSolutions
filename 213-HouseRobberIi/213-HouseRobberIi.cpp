// Last updated: 22/08/2025, 23:53:03
class Solution {
public:
     
        int linear_sol(vector<int>& nums,int start,int end){
            int first=0,second=0;
            for(int i=start;i<=end;i++){
                int curr=max(first,second+nums[i]);
                second=first;
                first=curr;
            }
            return first;
        }
        int rob(vector<int>& nums){
            int n=nums.size();
            if(n==0){
                return 0;
            }
            if(n==1){
                return nums[0];
            }
            if(n==2){
                return max(nums[0],nums[1]);
            }
            return(max(linear_sol(nums,0,n-2),linear_sol(nums,1,n-1)));
        }
    
};                  