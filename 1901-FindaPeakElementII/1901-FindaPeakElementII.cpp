// Last updated: 14/10/2025, 23:31:47
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int first=0,last=mat.size()-1;
        int peak=-1;

        while(first<last){
            auto m=(first+last)/2;
            auto curr=*max_element(mat[m].begin(),mat[m].end());
            auto next=*max_element(mat[m+1].begin(),mat[m+1].end());
            if(curr>next){
                last=m;
                peak=curr;
            }
            else{
                first=m+1;
                peak=next;
            }
        }
        int col=max_element(mat[first].begin(),mat[first].end())-mat[first].begin();

        return{first,col};
    }
};