// Last updated: 21/01/2026, 10:23:32
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n=nums.size();
5        int sum=0,len=n+1;
6        int start=0;
7        for(int end=0;end<n;end++){
8                sum+=nums[end];
9              
10                while(sum>=target){
11                   len = min(len, end - start + 1);
12                    sum-=nums[start];
13                    start++;
14                }
15            
16        }
17        if(len==n+1)
18        return 0;
19        else
20        return len;
21    }
22};