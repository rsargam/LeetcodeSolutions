// Last updated: 02/06/2026, 23:05:50
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int maxP=0,mincost=prices[0];
5        if(prices.empty())
6        return 0;
7        for(int i=1;i<prices.size();i++){
8            mincost=min(mincost,prices[i]);
9            int currprofit=prices[i]-mincost;
10            maxP=max(currprofit,maxP);
11        }
12        return maxP;
13    }
14};