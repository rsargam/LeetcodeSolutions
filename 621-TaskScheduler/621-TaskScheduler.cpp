// Last updated: 18/04/2026, 08:27:25
1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        vector<int>f(26,0);
5        for(char t:tasks)
6        f[t-'A']++;
7
8        int maxfreq=*max_element(f.begin(),f.end());
9        int countmax=count(f.begin(),f.end(),maxfreq);
10        
11        int partc=maxfreq-1;
12        int partlen=n+1;
13        int res=partc*partlen +countmax;
14
15        return max((int)tasks.size(),res);
16    }
17};