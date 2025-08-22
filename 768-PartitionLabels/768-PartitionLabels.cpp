// Last updated: 22/08/2025, 23:52:36
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>map;
        int prev=-1,maxi=0;
        vector<int> res;
        for(int i=0;i<s.size();i++){
            map[s[i]]=i;
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            maxi=max(maxi,map[s[i]]);
            if(maxi==i){
                res.push_back(i-prev);
                prev=i;
            }
        }
        return res;
    }
};