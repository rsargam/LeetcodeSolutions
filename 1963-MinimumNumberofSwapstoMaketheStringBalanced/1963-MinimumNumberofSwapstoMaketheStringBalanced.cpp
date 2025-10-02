// Last updated: 02/10/2025, 18:08:06
class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        for(char &ch:s){
            if(ch=='['){
                st.push(ch);
            }
            else if(!st.empty()){
                st.pop();
            }
        }
        return (st.size()+1)/2;
    }
};