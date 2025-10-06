// Last updated: 07/10/2025, 00:12:37
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string token="";
        stringstream ss(path);
           while(getline(ss,token,'/')){
            if(token=="" || token==".") continue;
            if(token!=".."){
              st.push(token);
            }
            else 
             if(!st.empty()){
                st.pop();
             }
           }
           if(st.empty())
           return "/";
           string result;
           while(!st.empty()){
            result='/'+st.top()+result;
            st.pop();
           }
            
        return result;
    }
};