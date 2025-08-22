// Last updated: 22/08/2025, 23:54:10
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int result=0,l=0,r=n-1;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            result=max(area,result);
            if(height[r]<height[l])
                r--;
            else 
                l++;
        }
        return result;
        
    }
};