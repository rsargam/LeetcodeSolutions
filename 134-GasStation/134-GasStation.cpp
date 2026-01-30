// Last updated: 30/01/2026, 10:49:11
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int totalcost=0,totalgas=0;
5        int start=0;
6        for(int i=0;i<gas.size();i++){
7            totalcost+=cost[i];
8            totalgas+=gas[i];
9        }
10        if(totalgas<totalcost)
11        return -1;
12
13        int remaingas=0;
14        for(int i=0;i<gas.size();i++){
15            remaingas+=gas[i]-cost[i];
16             if(remaingas<0){
17            start=i+1;
18            remaingas=0;
19        }
20        }
21       
22        return start;
23    }
24};