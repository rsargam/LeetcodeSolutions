// Last updated: 22/08/2025, 23:52:14
class Solution {
public:
    int numberOfSubstrings(string s) {
        int start=0,count[3]={0,0,0};
        int result=0;
        for(int end=0;end<s.size();end++){
            count[s[end]-'a']++;
        
        while(count[0]>0 && count[1]>0 && count[2]>0){
            result+=s.size()-end;
            count[s[start]-'a']--;
            start++;
        }


    }
    return result;
        
    }
};