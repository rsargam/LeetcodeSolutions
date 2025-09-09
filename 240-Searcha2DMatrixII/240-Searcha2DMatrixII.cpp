// Last updated: 09/09/2025, 09:30:25
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size(),n=m? matrix[0].size():0, r=0,c=n-1;
        while(r<m && c>=0){
            if(matrix[r][c]==target){
                return true;
            }
            matrix[r][c]>target? c-- :r++;
        }
        return false;
    }
};