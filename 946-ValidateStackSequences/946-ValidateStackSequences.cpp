// Last updated: 26/09/2025, 19:37:10
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0;
        int m=pushed.size();
        int n=popped.size();
        stack<int>st;
        while(i<m && j<m){
            st.push(pushed[i]);
            while(!st.empty() && j<m && st.top()==popped[j]){
                st.pop();
                j++;
            }
            i++;
        }
        return st.empty();
    }
};