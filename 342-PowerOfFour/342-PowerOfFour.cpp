// Last updated: 22/08/2025, 23:52:48
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        return false;
    return ((n &(n-1))==0 && n%3==1);
    }
};