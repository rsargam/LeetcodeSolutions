// Last updated: 24/03/2026, 09:30:32
1class Solution {
2public:
3int m,n;
4int result;
5int nonobstacles;
6vector<vector<int>>directions{{1,0},{-1,0},{0,-1},{0,1}};
7void backtrack(vector<vector<int>>& grid,int count,int i,int j){
8    if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==-1){
9return;
10
11
12    }
13if(grid[i][j]==2){
14    if(count+1==nonobstacles)
15    result++;
16    return;
17}
18grid[i][j]=-1;
19for(vector<int>&dir:directions){
20    int new_i=i+dir[0];
21    int new_j=j+dir[1];
22    backtrack(grid,count+1,new_i,new_j);
23}
24grid[i][j]=0;
25
26   
27  
28   
29
30     
31   
32
33}
34    int uniquePathsIII(vector<vector<int>>& grid) {
35        m=grid.size();
36        n=grid[0].size();
37        result=0;
38        nonobstacles=0;
39        int start_x=0;int start_y=0;
40        for(int i=0;i<m;i++){
41            for(int j=0;j<n;j++){
42                if(grid[i][j]!=-1)
43                nonobstacles++;
44                if(grid[i][j]==1){
45                    start_x=i;
46                    start_y=j;
47                }
48            }
49        }
50        backtrack(grid,0,start_x,start_y);
51        return result;
52    }
53};