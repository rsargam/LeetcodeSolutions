// Last updated: 02/06/2026, 22:50:49
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        stack<char>st;
5        for(int i=0;i<s.size();i++){
6            st.push(s[i]);
7
8        }
9        for(int i=0;i<s.size();i++){
10            int first=st.top();
11            s[i]=first;
12            st.pop();
13        }
14        
15    }
16};