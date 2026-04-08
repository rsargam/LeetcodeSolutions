// Last updated: 08/04/2026, 12:10:38
1class Solution {
2public:
3    long long pickGifts(vector<int>& gifts, int k) {
4        priority_queue<int>p;
5        for(int x:gifts){
6            p.push(x);
7        }
8        while(k--){
9            int top=p.top();
10            p.pop();
11            int remaining=floor(sqrt(top));
12            p.push(remaining);
13        }
14        long long sum=0;
15        while(!p.empty()){
16            sum+=p.top();
17            p.pop();
18        }
19        return sum;
20    }
21};