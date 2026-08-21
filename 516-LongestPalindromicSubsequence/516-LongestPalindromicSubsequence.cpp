// Last updated: 21/08/2026, 17:22:48
1class Solution {
2public:
3    int longestPalindromeSubseq(string s) {
4           int n=s.size();
5           string rev=s;
6           reverse(rev.begin(),rev.end());
7           vector<vector<int>>t(n+1,vector<int>(n+1,0));
8
9           for(int i=1;i<n+1;i++){
10            for(int j=1;j<n+1;j++){
11                if(s[i-1]==rev[j-1])
12                t[i][j]=1+t[i-1][j-1];
13                else
14                t[i][j]=max(t[i-1][j],t[i][j-1]);
15            }
16           }
17           return t[n][n];
18       
19    }
20};