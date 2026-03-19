// Last updated: 20/03/2026, 00:36:17
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i=0,n=s.size();
5        while(i<n && s[i]==' ')
6            i++;
7        int sign=1;
8        if(i<n && (s[i]=='+'|| s[i]=='-')){
9            if(s[i]=='-')
10            sign=-1;
11            i++;
12        }
13        long num=0;
14        while(i<n && isdigit(s[i])){
15            int digit=s[i]-'0';
16            if(num>(INT_MAX-digit)/10){
17                return(sign==1)?INT_MAX:INT_MIN;
18            }
19            num=num*10+digit;
20            i++;
21
22        }
23        return sign*num;
24
25    }
26};