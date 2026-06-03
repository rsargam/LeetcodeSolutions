// Last updated: 03/06/2026, 09:20:35
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0,maxcount=0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]==1){
7                count++;
8                maxcount=max(count,maxcount);
9            }   
10           
11            else{
12            count=0;
13            }
14        }
15        return maxcount;
16    }
17};