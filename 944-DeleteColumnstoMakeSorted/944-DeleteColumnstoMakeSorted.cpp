// Last updated: 20/12/2025, 10:51:12
1class Solution {
2public:
3     bool isUnsorted(const vector<string>&strs, int j){
4        for(int i=1;i<strs.size();i++)
5            if(strs[i][j]<strs[i-1][j])
6            return true;
7        return false;
8        
9     }
10    int minDeletionSize(vector<string>& strs) {
11        int result=0;
12        for(int i=0;i<strs[0].size();i++)
13            result+=isUnsorted(strs,i);
14            return result;
15        
16    }
17};