// Last updated: 14/09/2025, 23:10:10
class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>freq(26);
        int maxcons=0,maxvowel=0;
        for(char c: s){
            int i=c-'a';
            freq[i]++;
            if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
                maxvowel=max(maxvowel,freq[i]);
            }
            else{
                maxcons=max(maxcons,freq[i]);
            }
             
        }
        return maxcons+maxvowel;
    }
};