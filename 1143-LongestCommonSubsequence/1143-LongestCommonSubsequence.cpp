// Last updated: 29/01/2026, 01:24:56
1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        int m=text1.size();
5        int n=text2.size();
6
7        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
8        for(int i=1;i<=m;i++){
9            for(int j=1;j<=n;j++){
10                if(text1[i-1]==text2[j-1]){
11                    dp[i][j]=1+dp[i-1][j-1];
12                }
13                else{
14                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
15                }
16            }
17        }
18        return dp[m][n];
19    }
20};
21
22