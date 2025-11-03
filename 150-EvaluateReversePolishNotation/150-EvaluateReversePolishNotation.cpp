// Last updated: 03/11/2025, 17:57:43
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string,function<int(int,int)>>mp={
            {"+",[](int a,int b){return a+b;}},
            {"-",[](int a,int b){return a-b;}},
            {"*",[](int a,int b){return a*b;}},
            {"/",[](int a,int b){return a/b;}}
        };
        stack<int>st;
        for( string &token :tokens){
            if(token=="+" || token=="-" ||token=="/" ||token=="*"){

            
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();

            int result=mp[token](a,b);
            st.push(result);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};