// Last updated: 05/04/2026, 23:34:13
1class Solution {
2public:
3int result=INT_MIN;
4int m;
5void solve(int idx,int count,int n,vector<int>&resultant,vector<vector<int>>&requests){
6    if(idx>=m){
7        bool allzero=true;
8        for(int &x:resultant){
9            if(x!=0){
10                allzero=false;
11                break;
12            }
13        }
14        if(allzero==true){
15            result=max(result,count);
16        }
17        return;
18    
19}
20int from=requests[idx][0];
21int to=requests[idx][1];
22resultant[from]--;
23resultant[to]++;
24solve(idx+1,count+1,n,resultant,requests);
25resultant[from]++;
26resultant[to]--;
27solve(idx+1,count,n,resultant,requests);
28}
29    int maximumRequests(int n, vector<vector<int>>& requests) {
30        m=requests.size();
31        vector<int>resultant(n,0);
32        solve(0,0,n,resultant,requests);
33        return result;
34    }
35};