// Last updated: 18/04/2026, 16:24:28
1class KthLargest {
2public:
3int K;
4 priority_queue<int,vector<int>, greater<int>>p;
5    KthLargest(int k, vector<int>& nums) {
6        K=k;
7
8        for(int &num:nums){
9            p.push(num);
10            if(p.size()>k)
11            p.pop();
12        }
13    }
14    
15    int add(int val) {
16        p.push(val);
17        if(p.size()>K)
18        p.pop();
19        return p.top();
20    }
21};
22
23/**
24 * Your KthLargest object will be instantiated and called as such:
25 * KthLargest* obj = new KthLargest(k, nums);
26 * int param_1 = obj->add(val);
27 */