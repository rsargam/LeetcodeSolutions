// Last updated: 02/12/2025, 19:09:39
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        int n=intervals.size();
5        sort(begin(intervals),end(intervals));
6        vector<vector<int>>result;
7        result.push_back(intervals[0]);
8        for(int i=1;i<n;i++){
9            if(intervals[i][0]<=result.back()[1]){
10                result.back()[1]=max(result.back()[1],intervals[i][1]);
11            }
12            else{
13                result.push_back(intervals[i]);
14            }
15        }
16        return result;
17    }
18};