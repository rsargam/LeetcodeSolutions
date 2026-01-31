// Last updated: 31/01/2026, 12:15:06
1class Trie {
2public:
3    Trie *children[26];
4    bool eow;
5    Trie() {
6        for(int i=0;i<26;i++){
7            children[i]=NULL;
8        }
9        eow=false;
10    }
11
12    void insert(string word) {
13    Trie* curr=this;
14        for(char ch: word){
15         int index=ch-'a';
16        
17        if(curr->children[index]==NULL)
18        curr->children[index]=new Trie();
19    
20    curr=curr->children[index];
21        }
22        curr->eow=true;
23    }
24    
25    bool search(string word) {
26    Trie* curr=this;
27     
28        for(char ch: word){
29         int  index=ch-'a';
30     
31            if(curr->children[index]==NULL){
32                return false;   
33            }
34                curr=curr->children[index];
35         
36        }
37        return curr->eow;
38    }
39    
40    bool startsWith(string prefix) {
41           int index;
42            Trie* curr=this;
43        for(char ch: prefix){
44            index=ch-'a';
45       
46            if(curr->children[index]==NULL){
47                return false;
48               
49            }
50             curr=curr->children[index];
51        }
52            return true;
53    }
54};
55
56/**
57 * Your Trie object will be instantiated and called as such:
58 * Trie* obj = new Trie();
59 * obj->insert(word);
60 * bool param_2 = obj->search(word);
61 * bool param_3 = obj->startsWith(prefix);
62 */