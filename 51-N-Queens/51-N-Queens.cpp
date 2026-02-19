// Last updated: 20/02/2026, 00:16:42
1class Solution {
2public:
3    vector<vector<string>>result;
4
5    bool isSafe(int row,int col,vector<string>&board,int n){
6        for(int i=0;i<row;i++)
7            if(board[i][col]=='Q')
8            return false;
9
10         for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
11            if(board[i][j]=='Q')
12            return false;
13
14         for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
15            if(board[i][j]=='Q')
16            return false;
17         
18         return true;
19        
20    }
21
22    void solve(vector<string>&board,int row,int n){
23        if(row==n){
24            result.push_back(board);
25            return;
26        }
27        for(int col=0;col<n;col++){
28            if(isSafe(row,col,board,n)){
29                board[row][col]='Q';
30                solve(board,row+1,n);
31                board[row][col]='.';
32            }
33        }
34    }
35    vector<vector<string>> solveNQueens(int n) {
36        vector<string>board(n,string(n,'.'));
37        solve(board,0,n);
38        return result;
39    }
40};