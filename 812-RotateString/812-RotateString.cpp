// Last updated: 22/08/2025, 23:52:30
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string newstring= s+s;
        if (newstring.find(goal)==std::string::npos){
            return false;
        }
        return true;
    }
};