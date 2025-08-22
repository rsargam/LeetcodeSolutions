// Last updated: 22/08/2025, 23:54:03
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int top=st.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
            else{
                if(st.empty())
                return false;
                char top = st.top();
                if ((s[i] == ')' && top == '(') || 
                    (s[i] == '}' && top == '{') || 
                    (s[i] == ']' && top == '[')) {
                    st.pop();  
                }
                 else {
                    return false;  
               
                }
            }
        }
        return st.empty();
    }
};