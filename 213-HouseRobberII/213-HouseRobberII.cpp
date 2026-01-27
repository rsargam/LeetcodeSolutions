// Last updated: 27/01/2026, 23:08:34
1class Solution {
2public:
3     
4        int linear_sol(vector<int>& nums,int start,int end){
5            int first=0,second=0;
6            for(int i=start;i<=end;i++){
7                int curr=max(first,second+nums[i]);
8                second=first;
9                first=curr;
10            }
11            return first;
12        }
13        int rob(vector<int>& nums){
14            int n=nums.size();
15            if(n==0){
16                return 0;
17            }
18            if(n==1){
19                return nums[0];
20            }
21            if(n==2){
22                return max(nums[0],nums[1]);
23            }
24            return(max(linear_sol(nums,0,n-2),linear_sol(nums,1,n-1)));
25        }
26    
27};                  