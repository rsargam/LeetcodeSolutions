// Last updated: 29/09/2025, 16:27:42
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n=temperatures.size();
        vector<int>answer(n,0);
        for(int i=0;i<n;i++){
           while(!st.empty() && temperatures[i]>temperatures[st.top()]){
            int index=st.top();
            st.pop();
            answer[index]=i-index;
           }
           st.push(i);
        }
        return answer;
    }
};