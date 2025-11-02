// Last updated: 02/11/2025, 08:28:32
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minnum=*min_element(nums.begin(),nums.end());
        int maxnum=*max_element(nums.begin(),nums.end());
        unordered_set<int>st(nums.begin(),nums.end());
        vector<int>missing;
        for(int i=minnum;i<=maxnum;i++){
            if(st.find(i)==st.end())
                missing.push_back(i);
        }
        return missing;
    }
};