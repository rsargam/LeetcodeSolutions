// Last updated: 22/08/2025, 23:53:12
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int start=0,end=n-1;
        int sum=numbers[start]+numbers[end];
        while(sum!=target){
            if(sum<target){
                start++;
            }
            else
            end--;
            sum=numbers[start]+numbers[end];
        }
        return {start+1,end+1};
    }
};