// Last updated: 25/11/2025, 11:11:22
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int remainder=0;
        if(k%2==0 || k%5==0){
            return -1;
        }
        for(int len=1;len<=k;len++){
            remainder= (remainder *10+1)%k;
        
          if(remainder==0)
            return len;
        }
        return -1;

    }
};