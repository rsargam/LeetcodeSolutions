// Last updated: 21/01/2026, 10:07:27
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int n=numbers.size();
5        int start=0,end=n-1;
6        int sum=numbers[start]+numbers[end];
7        while(sum!=target){
8
9        
10        if(sum<target){
11            start++;
12        }
13        else{
14            end--;
15        }
16        sum=numbers[start]+numbers[end];
17        }
18        return {start+1,end+1};
19    }
20};