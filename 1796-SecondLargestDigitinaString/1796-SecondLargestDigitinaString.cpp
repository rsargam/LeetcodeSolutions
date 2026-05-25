// Last updated: 25/05/2026, 12:21:10
1class Solution {
2public:
3    int secondHighest(string s) {
4        int largest=-1,second=-1;
5        for(char ch:s){
6            if (isdigit(ch)){
7                int d= ch-'0';
8                if(d>largest){
9                    second=largest;
10                    largest=d;
11                }
12                else if(d<largest && d>second)
13                second=d;
14            }
15        }
16        return second;
17    }
18};