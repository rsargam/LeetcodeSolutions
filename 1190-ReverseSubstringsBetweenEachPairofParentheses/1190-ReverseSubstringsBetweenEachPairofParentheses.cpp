// Last updated: 07/11/2025, 22:55:08
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>last;
        string result;
        for(char &ch:s){
            if(ch=='('){
                last.push(result.length());
            }
            else if(ch==')'){
                int l =last.top();
                last.pop();
                reverse(begin(result)+l,end(result));
            }
            else{
                result.push_back(ch);
            }
        }
        return result;
    }
};