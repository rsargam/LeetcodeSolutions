// Last updated: 21/01/2026, 11:45:15
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int n=nums.size();
5        int leftsum=0,totalsum=0;
6        for(int j=0;j<n;j++){
7           totalsum+=nums[j];
8        }
9        for(int i=0;i<n;i++){
10        if(leftsum==totalsum-leftsum-nums[i])
11            return i;
12
13            
14            leftsum+=nums[i];
15        
16        }
17      return -1;
18    }
19};