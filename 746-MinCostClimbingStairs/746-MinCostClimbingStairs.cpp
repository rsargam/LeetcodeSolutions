// Last updated: 20/04/2026, 13:01:16
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4        int n=cost.size();
5        if(n==2)
6        return min(cost[0],cost[1]);
7        for(int i=2;i<n;i++){
8            cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
9        }
10        return min(cost[n-1],cost[n-2]);
11    }
12};