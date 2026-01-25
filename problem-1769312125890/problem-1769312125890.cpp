// Last updated: 25/01/2026, 09:05:25
1class Solution {
2public:
3
4    vector<int>bfs(int start,vector<vector<int>>&adja,int n){
5        vector<int>arr(n,-1);
6        queue<int>q;
7        q.push(start);
8        arr[start]=0;
9
10        while(!q.empty()){
11            int a=q.front();
12            q.pop();
13            for(int j:adja[a]){
14                if(arr[j]==-1){
15                    arr[j]=arr[a]+1;
16                    q.push(j);
17                }
18            }
19        }
20        return arr;
21    }
22    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
23        auto corimexalu=edges;
24
25        vector<vector<int>>arr(n);
26        for(auto &e:edges){
27            arr[e[0]].push_back(e[1]);
28            arr[e[1]].push_back(e[0]);
29        }
30        vector<int>distx=bfs(x,arr,n);
31        vector<int>disty=bfs(y,arr,n);
32        vector<int>distz=bfs(z,arr,n);
33        int ans=0;
34
35        for(int i=0;i<n;i++){
36            int a=distx[i];
37            int b=disty[i];
38            int c=distz[i];
39
40            vector<int>d={a,b,c};
41            sort(d.begin(),d.end());
42
43            long long A=d[0], B=d[1], C=d[2];
44            if(A*A+B*B==C*C){
45                ans++;
46            }
47        }
48    
49        return ans;
50    }
51};