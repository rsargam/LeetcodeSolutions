// Last updated: 22/08/2025, 23:52:03
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> lower(26,0);
        if(sentence.size()<26){
            return false;
        }
        for(char c : sentence){
            lower[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(lower[i]==0){
                return false;
            }
        }
        return true;
    }
};