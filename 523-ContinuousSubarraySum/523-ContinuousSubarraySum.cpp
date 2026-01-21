// Last updated: 22/01/2026, 00:12:03
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int>mp;
6        int sum=0;
7        mp[0]=-1;
8        for(int i=0;i<n;i++){
9            sum+=nums[i];
10        int rem=sum%k;
11        if(mp.find(rem)!=mp.end()){
12            if(i-mp[rem]>=2)
13            return true;
14        }
15            else
16            mp[rem]=i;
17        
18        }
19        return false;
20    }
21};