// Last updated: 13/09/2025, 01:21:22
class Solution {
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(char c: s){
            if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')
            count++;
        }
        if(count==0)
        return false;
        return true;
    }
};