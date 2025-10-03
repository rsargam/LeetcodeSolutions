// Last updated: 03/10/2025, 22:42:10
class Solution {
public:
    int minSwaps(string s) {
        // stack<char>st;
        // for(char ch:s){
        //     if(ch == '['){
        //         st.push(ch);
        //     }
        //     else if(!st.empty()){
        //         st.pop();
        //     }
        // }
        // return (st.size()+1)/2;

        int size=0;
        for(char &ch:s){
            if(ch == '['){
                size++;
            }
            else if(size > 0){
                size--;
            }
        }
        return (size+1)/2;
    }
};