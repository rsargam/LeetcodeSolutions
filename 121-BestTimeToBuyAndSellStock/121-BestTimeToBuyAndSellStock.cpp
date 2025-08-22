// Last updated: 22/08/2025, 23:53:27
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int minCost=prices[0];
        int maxProfit=0;

        for(int i=1;i<prices.size();i++){
            minCost=min(minCost,prices[i]);
            int curr_profit=prices[i]-minCost;

           maxProfit=max(curr_profit,maxProfit); 
        }
        return maxProfit;
    }
};