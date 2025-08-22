// Last updated: 22/08/2025, 23:52:10
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
       int maxcandies= *max_element(candies.begin(),candies.end());
       for(int i=0;i<candies.size();i++){
        ans.push_back(candies[i]+extraCandies>= maxcandies);
       }
       return ans;
    }
};