// Last updated: 22/04/2026, 11:00:55
1class Solution {
2public:
3    bool SubsetSum(vector<int>& arr, int sum){
4        int n=arr.size();
5        vector<vector<bool>>t(n+1,vector<bool>(sum+1));
6        for(int i=0;i<=n;i++){
7            t[i][0]=true;
8        }
9        for(int j=1;j<=sum;j++){
10            t[0][j]=false;
11         }
12         for(int i=1;i<=n;i++){
13            for(int j=1;j<=sum;j++){
14                if(arr[i-1]<=j){
15                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
16                }
17                else{
18                    t[i][j]=t[i-1][j];
19                }
20            }
21         }
22         return t[n][sum];
23
24        }
25    
26    bool canPartition(vector<int>& nums) {
27        int sum=0;
28        for(int i=0;i<nums.size();i++)
29        sum+=nums[i];
30
31        if(sum%2!=0)
32        return false;
33        else
34            return SubsetSum(nums,sum/2);
35        
36    }
37};