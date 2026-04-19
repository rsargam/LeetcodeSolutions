// Last updated: 19/04/2026, 18:52:16
1class Solution {
2public:
3    int climbStairs(int n) {
4        if(n<=1){
5            return 1;
6        }
7       int prev1=1;
8       int prev2=1;
9       for(int i=2;i<=n; i++){
10        int current= prev1 + prev2;
11        prev2=prev1;
12        prev1=current;
13       }
14       return prev1;
15    }
16};