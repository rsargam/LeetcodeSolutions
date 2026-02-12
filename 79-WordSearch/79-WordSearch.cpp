// Last updated: 12/02/2026, 14:08:05
1class Solution {
2public:
3int m ,n;
4
5bool dfs(vector<vector<char>>&board,string word,int i,int j,int index){
6    if(index==word.size())
7    return true;
8    if(i<0 || j<0 ||i>=n || j>=m || board[i][j]!=word[index]){
9        
10        return false;
11    }
12        char temp=board[i][j];
13        board[i][j]='#';
14
15        bool found=
16        dfs(board,word,i+1,j,index+1) || 
17        dfs(board,word,i-1,j,index+1) ||
18        dfs(board,word,i,j+1,index+1) ||
19        dfs(board,word,i,j-1,index+1);
20
21        board[i][j]=temp;
22        return found;
23
24    
25}
26    bool exist(vector<vector<char>>& board, string word) {
27        n=board.size();
28        m=board[0].size();
29        for(int i=0;i<n;i++){
30            for(int j=0;j<m;j++){
31                if(dfs(board,word,i,j,0))
32                return true;
33
34            }
35        }
36        return false;
37    }
38};