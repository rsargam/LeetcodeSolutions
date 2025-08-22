// Last updated: 22/08/2025, 23:53:07
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> maps2t, mapt2s;
        for(int i=0;i<s.length();i++){
            char c1=s[i] ,c2=t[i];

            if((maps2t.count(c1) && maps2t[c1]!=c2) || (mapt2s.count(c2) && mapt2s[c2]!=c1)){
                return false;
            }
            maps2t[c1]=c2;
            mapt2s[c2]=c1;
        }
        return true;
    }
};