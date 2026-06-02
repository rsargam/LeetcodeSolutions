// Last updated: 02/06/2026, 22:46:06
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int candidate=0, count=0;
5        for(int num:nums){
6            if(count==0)
7            candidate=num;
8            if(num==candidate)
9            count++;
10            else
11            count--;
12        }
13        return candidate;
14    }
15};