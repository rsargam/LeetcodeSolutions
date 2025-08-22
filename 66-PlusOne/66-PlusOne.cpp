// Last updated: 22/08/2025, 23:53:43
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
       for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i]=0;
     }
     digits.insert(digits.begin(),1);
     return digits;
     

    

        
    }
};