// Last updated: 23/03/2026, 00:27:14
1class Solution {
2public:
3 int n;
4 int result=INT_MAX;
5 void solve(int idx,vector<int>&cookies,vector<int>&children,int k){
6    if(idx>=n){
7        int unfair= *max_element(begin(children),end(children));
8        result=min(result,unfair);
9return;
10    }
11    
12    int cookie=cookies[idx];
13    for(int i=0;i<k;i++){
14        children[i]+=cookie;
15        solve(idx+1,cookies,children,k);
16        children[i]-=cookie;
17    }
18 }
19
20    int distributeCookies(vector<int>& cookies, int k) {
21        n=cookies.size();
22        vector<int>children(k,0);
23        solve(0,cookies,children,k);
24        return result;
25    }
26};