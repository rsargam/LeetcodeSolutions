// Last updated: 13/09/2025, 01:19:03
class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char>vowels={'a','e','i','o','u'};
        for(char c: s){
            if(vowels.count(c))
            return true;
        }
        return false;
    }
};