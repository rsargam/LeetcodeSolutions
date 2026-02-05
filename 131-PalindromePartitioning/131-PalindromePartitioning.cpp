// Last updated: 05/02/2026, 18:50:51
1class Solution {
2public:
3    vector<vector<string>>result;
4    vector<string>temp;
5bool isPalindrome(string s,int start,int end){
6    while(start<end){
7        if(s[start]!=s[end])
8        return false;
9        start++;
10        end--;
11    }
12    return true;
13
14}
15void find(int start,string &s){
16   
17    if(start==s.length()){
18        result.push_back(temp);
19        return;
20    }
21    for(int i=start;i<s.length();i++){
22        if(isPalindrome(s,start,i)){
23        temp.push_back(s.substr(start,i-start+1));
24        find(i+1,s);
25        temp.pop_back();
26        }
27    }
28}
29    vector<vector<string>> partition(string s) {
30        find(0,s);
31        return result;
32    }
33};