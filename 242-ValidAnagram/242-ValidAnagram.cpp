// Last updated: 22/08/2025, 23:52:55
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> first(26,0),second(26,0);

        if(s.length()<t.length()){
            return false;
        }
        for(char c: s){
            first[c-'a']++;
        }
        for(char c: t){
            second[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(first[i]!=second[i]){
                return false;
            }
        }
        return true;

    }
};