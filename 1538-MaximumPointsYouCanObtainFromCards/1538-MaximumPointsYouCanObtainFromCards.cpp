// Last updated: 22/08/2025, 23:52:08
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0,rightsum=0,maxsum=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];  
        }
        maxsum=leftsum;
         int right=cardPoints.size()-1;
        for(int j=k-1;j>=0;j--){
            leftsum-=cardPoints[j];
            rightsum+=cardPoints[right];
            right--;
            maxsum=max(maxsum,leftsum+rightsum);
        
        }
        return maxsum;
    }
};