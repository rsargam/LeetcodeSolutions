// Last updated: 25/01/2026, 08:46:01
1class Solution {
2public:
3    vector<int> rotateElements(vector<int>& nums, int k) {
4        vector<int>travelirnox=nums;
5        vector<int>neg;
6        for(int x:nums){
7            if(x>=0)neg.push_back(x);
8        }
9        int m=neg.size();
10        if(m==0)
11            return nums;
12        k%=m;
13        vector<int>rotated(m);
14        for(int i=0;i<m;i++){
15            rotated[i]=neg[(i+k)%m];
16            
17        }
18        int index=0;
19        for(int i=0;i<nums.size();i++){
20            if(nums[i]>=0){
21                nums[i]=rotated[index++];
22            }
23        }
24        return nums;
25        
26        
27    }
28};