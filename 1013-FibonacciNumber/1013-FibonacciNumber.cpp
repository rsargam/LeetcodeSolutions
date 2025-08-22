// Last updated: 22/08/2025, 23:52:22
class Solution {
public:
    int fib(int n) {
        if (n<=1){
            return n;
        }
        else
        return fib(n-1)+fib(n-2);
        
    }
};