// Last updated: 22/08/2025, 23:52:41
class Solution {
public:
    int characterReplacement(string s, int k) {
        int count=0,left=0,res=0;
        vector<int>nums(26,0);
        for(int r=0;r<s.size();r++){
            nums[s[r]-'A']++;
            count= max(count,nums[s[r]-'A']);

            while((r-left+1)-count>k){
                nums[s[left]-'A']--;
                left++;
            }
            res = max(res, r - left + 1);
                
            }
        return res;
    }
};