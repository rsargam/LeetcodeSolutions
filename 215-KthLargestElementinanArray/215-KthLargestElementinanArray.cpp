// Last updated: 09/04/2026, 08:32:12
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int,vector<int>,greater<int>>p;
5        for(int i=0;i<k;i++)
6        p.push(nums[i]);
7        for(int i=k;i<nums.size();i++){
8            if(nums[i]>p.top()){
9                p.pop();
10                p.push(nums[i]);
11            }
12        }
13        return p.top();
14
15        
16    }
17};