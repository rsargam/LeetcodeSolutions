// Last updated: 30/01/2026, 11:50:03
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n=ratings.size();
5        vector<int>lc(n,1);
6        vector<int>rc(n,1);
7        for(int i=1;i<n;i++){
8            if(ratings[i]>ratings[i-1]){
9                lc[i]=lc[i-1]+1;
10            }
11        }
12        for(int i=n-2;i>=0;i--){
13            if(ratings[i]>ratings[i+1]){
14                rc[i]=rc[i+1]+1;
15            }
16        }
17        int sum=0;
18        for(int i=0;i<n;i++){
19            sum+=max(lc[i],rc[i]);
20        }
21        return sum;
22    }
23};