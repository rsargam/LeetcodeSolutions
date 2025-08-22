// Last updated: 22/08/2025, 23:51:45
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>result;
        for(int i=1;i<mountain.size()-1;i++){
            if(mountain[i]>mountain[i+1] && mountain[i]>mountain[i-1])result.push_back(i);  
        }
        return result;
    }
};