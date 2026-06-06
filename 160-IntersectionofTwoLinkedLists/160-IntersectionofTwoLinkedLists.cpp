// Last updated: 06/06/2026, 16:53:20
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        ListNode* p1=headA;
13        ListNode* p2=headB;
14        while(p1!=p2){
15            if(p1==NULL){
16                p1=headB;
17            }
18            else 
19            p1=p1->next;
20            if(p2==NULL){
21                p2=headA;
22
23            }
24            else
25            p2=p2->next;
26        }
27        return p1;
28    }
29};