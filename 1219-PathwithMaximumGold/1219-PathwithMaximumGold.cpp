// Last updated: 06/04/2026, 21:56:12
1class Solution {
2public:
3int m;
4int n;
5vector<vector<int>>directions{{-1,0},{1,0},{0,1},{0,-1}};
6int DFS(vector<vector<int>>&grid,int i,int j){
7    if(i>=m||i<0||j>=n||j<0||grid[i][j]==0){
8        return 0;
9    }
10    int originalgoldvalue=grid[i][j];
11    grid[i][j]=0;
12    int maxgold=0;
13    for(vector<int>&dir:directions){
14        int new_i=i+dir[0];
15        int new_j=j+dir[1];
16        maxgold=max(maxgold,DFS(grid,new_i,new_j));
17    }
18    grid[i][j]=originalgoldvalue;
19    return originalgoldvalue+ maxgold;
20}
21    int getMaximumGold(vector<vector<int>>& grid) {
22        m=grid.size();
23        n=grid[0].size();
24        int maxgold=0;
25        for(int i=0;i<m;i++){
26            for(int j=0;j<n;j++){
27                if(grid[i][j]!=0){
28                    maxgold=max(maxgold,DFS(grid,i,j));
29                }
30            }
31        }
32        return maxgold;
33    }
34};