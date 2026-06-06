// Last updated: 06/06/2026, 10:54:55
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14       ListNode* newnode=new ListNode(0);
15       ListNode* current=newnode;
16
17       while(list1!=NULL && list2!=NULL){
18        if(list1->val < list2->val){
19            current->next=list1;
20            list1=list1->next;
21        }
22        else{
23             current->next=list2;
24            list2=list2->next;
25        }
26        current=current->next;
27       }
28        if(list1!=NULL){
29            current->next=list1;
30        }
31
32        if(list2!=NULL){
33            current->next=list2;
34        }
35
36     
37       return newnode->next;
38    }
39};