// Last updated: 16/11/2025, 01:26:11
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";
        while(columnNumber>0){
            columnNumber--;
            result=char(columnNumber % 26 +'A')+result;
            columnNumber/=26;
        }
        return result;
    }
};