// Last updated: 22/08/2025, 23:54:14
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int first=0,second=0,len=0;
        while(second<s.size()){
            while(count[s[second]]){
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        return len;
    }
};