// Last updated: 20/04/2026, 00:33:28
1class Solution {
2public:
3int  fibon(int n,vector<int>&dp){
4    if(n<=1)
5    return n;
6    if(dp[n]!=-1)
7    return dp[n];
8    return dp[n]=fibon(n-1,dp)+fibon(n-2,dp);
9}
10    int fib(int n) {
11       vector<int>dp(n+1,-1);
12       return fibon(n,dp);
13            
14
15        
16
17        
18    }
19};