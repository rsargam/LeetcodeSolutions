// Last updated: 22/08/2025, 23:53:28
class Solution {
public:
    vector<int> pascal(int row) {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1); 
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(pascal(i));
        }
        return ans;
    }
};
