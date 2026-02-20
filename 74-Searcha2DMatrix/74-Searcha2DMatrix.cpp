// Last updated: 21/02/2026, 00:23:32
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6        for(int i=0;i<m;i++){
7            for(int j=0;j<n;j++){
8               if(matrix[i][j]==target){
9                return true;
10               }
11                }
12            }
13            return false;
14        }
15        
16    
17};