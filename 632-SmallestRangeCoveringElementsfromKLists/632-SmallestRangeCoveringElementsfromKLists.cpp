// Last updated: 17/04/2026, 10:19:22
1class Solution {
2public:
3    vector<int> smallestRange(vector<vector<int>>& nums) {
4        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int, pair<int,int>>>>p;
5        int mini,maxi=INT_MIN;
6        for(int i=0;i<nums.size();i++){
7            p.push(make_pair(nums[i][0],make_pair(i,0)));
8            maxi=max(maxi,nums[i][0]);
9        }
10        mini=p.top().first;
11        vector<int>ans(2);
12        ans[0]=mini;
13        ans[1]=maxi;
14        pair<int,pair<int,int>>temp;
15        int row,col,elem;
16        while(p.size()==nums.size()){
17          temp=p.top();
18            p.pop();
19            elem=temp.first;
20            row=temp.second.first;
21            col=temp.second.second;
22            if(col+1<nums[row].size()){
23                col++;
24                p.push(make_pair(nums[row][col],make_pair(row,col)));
25                maxi=max(maxi,nums[row][col]);
26                mini=p.top().first;
27                if(maxi-mini<ans[1]-ans[0]){
28                    ans[0]=mini;
29                    ans[1]=maxi;
30                }
31            }
32
33
34        }
35        return ans;
36    }
37};