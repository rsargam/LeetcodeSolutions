// Last updated: 21/08/2026, 14:15:24
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int n=s.size();
5        int m=t.size();
6
7        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
8        for(int i=1;i<n+1;i++){
9            for(int j=1;j<m+1;j++){
10                if(s[i-1]==t[j-1])
11                dp[i][j]=1+dp[i-1][j-1];
12                else
13                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
14               
15            }
16        }
17        if(s.size()==dp[n][m])
18        return true;
19        else
20        return false;
21    }
22};