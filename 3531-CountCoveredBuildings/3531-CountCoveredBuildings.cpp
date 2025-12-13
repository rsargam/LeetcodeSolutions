// Last updated: 13/12/2025, 21:37:25
1class Solution {
2public:
3    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
4        unordered_map<int,pair<int,int>>ytox;
5        unordered_map<int,pair<int,int>>xtoy;
6        for(auto &building: buildings){
7            int x=building[0];
8            int y=building[1];
9            if(!ytox.count(y)){
10                ytox[y]={INT_MAX,INT_MIN};
11            }
12            if(!xtoy.count(x)){
13                xtoy[x]={INT_MAX,INT_MIN};
14            }
15            ytox[y].first=min(ytox[y].first,x);
16            ytox[y].second=max(ytox[y].second,x);
17
18            xtoy[x].first=min(xtoy[x].first,y);
19            xtoy[x].second=max(xtoy[x].second,y);
20        }
21        int result=0;
22        for(auto &building : buildings){
23            int x=building[0];
24            int y=building[1];
25            auto &xr=ytox[y];
26            auto &yr=xtoy[x];
27            if(xr.first<x && x<xr.second && yr.first<y && y<yr.second){
28                result++;
29            }
30        }
31        return result;
32    }
33};