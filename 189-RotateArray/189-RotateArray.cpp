// Last updated: 02/06/2026, 12:00:13
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        k=k%n;
6        vector<int>rotated(n);
7        for(int i=0;i<n;i++){
8            rotated[(i+k)%n]=nums[i];
9        }
10        for (int i=0;i<n;i++){
11            nums[i]=rotated[i];
12        }
13       
14
15
16    }
17};