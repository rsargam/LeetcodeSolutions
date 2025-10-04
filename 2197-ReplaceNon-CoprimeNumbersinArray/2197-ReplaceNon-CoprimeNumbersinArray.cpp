// Last updated: 04/10/2025, 19:11:53
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>result;
        for(int num:nums){
            while(!result.empty()){
                int prev=result.back();
                int curr=num;
                int Gcd=gcd(prev,curr);
                if(Gcd==1)
                break;
                result.pop_back();
                int lcm=prev/Gcd*curr;
                num=lcm;
            }
            result.push_back(num);
        }
        return result;
    }
};