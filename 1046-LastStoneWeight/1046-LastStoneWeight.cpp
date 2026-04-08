// Last updated: 08/04/2026, 11:35:32
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int>p;
5        for(int i=0;i<stones.size();i++)
6        p.push(stones[i]);
7
8        while(p.size()>1){
9            int weight=p.top();
10            p.pop();
11            weight-=p.top();
12            p.pop();
13
14            if(weight)
15            p.push(weight);
16        }
17        return p.empty()? 0:p.top();
18        
19
20
21    }
22};