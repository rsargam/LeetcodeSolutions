// Last updated: 22/08/2025, 23:53:46
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }

        }
        return max;
    }
};