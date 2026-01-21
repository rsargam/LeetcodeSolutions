// Last updated: 21/01/2026, 12:16:54
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int>prefix(n+1,0);
6        for(int i=0;i<n;i++){
7            prefix[i+1]=prefix[i]+nums[i];
8        }
9        int count=0;
10        for(int i=0;i<n;i++){
11            for(int j=i;j<n;j++){
12                if(prefix[j+1]-prefix[i]==k)
13                count++;
14            }
15        }
16        return count;
17    }
18};