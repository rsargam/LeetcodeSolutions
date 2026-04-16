// Last updated: 16/04/2026, 19:21:30
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13
14ListNode* mergetwosortedlists(ListNode* l1,ListNode* l2){
15    if(!l1)
16    return l2;
17    if(!l2)
18    return l1;
19    if(l1->val<=l2->val){
20        l1->next=mergetwosortedlists(l1->next,l2);
21        return l1;
22    }
23    else{
24        l2->next=mergetwosortedlists(l1,l2->next);
25        return l2;
26    }
27    return NULL;
28}
29ListNode* partitionandmerge(int start,int end,vector<ListNode*>&lists){
30    if(start>end)
31    return NULL;
32    if(start==end){
33        return lists[start];
34    }
35    int mid=start+(end-start)/2;
36    ListNode* l1=partitionandmerge(start,mid,lists);
37    ListNode* l2=partitionandmerge(mid+1,end,lists);
38    return mergetwosortedlists(l1,l2);
39
40
41}
42    ListNode* mergeKLists(vector<ListNode*>& lists) {
43        int k=lists.size();
44        if(k==0)
45        return NULL;
46        return partitionandmerge(0,k-1,lists);
47    }
48};