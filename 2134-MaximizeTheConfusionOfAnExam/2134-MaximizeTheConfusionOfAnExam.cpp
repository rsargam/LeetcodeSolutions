// Last updated: 22/08/2025, 23:51:55
class Solution {
    private:
    int flipOperation(string s,int k, char target){
        int left=0,maxlen=0,flip=0;
        for(int right=0;right<s.size();right++){
            if(s[right]!=target){
                flip++;
            }
            while(flip>k){
                if(s[left]!=target){
                flip--;
                } 
                left++;
            }
            
            
            maxlen=max(maxlen,right-left+1);
            
        }
        return maxlen;
    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(flipOperation(answerKey,k,'T'),flipOperation(answerKey,k,'F'));
    }
};