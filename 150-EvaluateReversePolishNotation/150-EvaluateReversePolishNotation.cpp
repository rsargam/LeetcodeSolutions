// Last updated: 23/01/2026, 10:33:24
1class Solution {
2public:
3    bool isNumber(string s){
4        return !(s=="+" || s=="-" || s=="*" || s=="/");
5    }
6    int evalRPN(vector<string>& tokens) {
7        stack<int>st;
8        for(int i=0;i<tokens.size();i++){
9            if(isNumber(tokens[i])){
10                st.push(stoi(tokens[i]));
11            }
12            else {
13                int a=st.top();
14                st.pop();
15                int b=st.top();
16                st.pop();
17               if(tokens[i]=="+"){
18                st.push(a+b);
19               }
20               else if(tokens[i]=="-"){
21                st.push(b-a);
22               }
23               else if(tokens[i]=="*"){
24                st.push(a*b);
25               }
26               else if(tokens[i]=="/"){
27                st.push(b/a);
28               }
29
30            }
31        }
32        return st.top();
33    }
34};