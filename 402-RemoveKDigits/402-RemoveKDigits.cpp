// Last updated: 31/10/2025, 09:56:18
class Solution {
public:
    string removeKdigits(string num, int k) {
        string result="";
        int n=num.size();
        for(int i=0;i<n;i++){
            while(result.length()>0 && result.back() > num[i]&& k>0){
                result.pop_back();
                k--;
            }
            if(result.length()>0 || num[i]!='0'){
                result.push_back(num[i]);
            }
        }
        while(k>0 && !result.empty()){
            result.pop_back();
            k--;
        }
        if(result.empty()){
            return "0";
        }
        return result;
    }
};