// Last updated: 18/04/2026, 09:20:49
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        priority_queue<pair<int,int>>p;
5        vector<int>result;
6        unordered_map<int,int>mp;
7        for(int i=0;i<nums.size();i++){
8            mp[nums[i]]++;
9        }
10        for(auto it: mp){
11            p.push({it.second,it.first});
12        }
13            
14
15        while(k--){
16            result.push_back(p.top().second);
17            p.pop();
18        }
19        return result;
20    }
21};