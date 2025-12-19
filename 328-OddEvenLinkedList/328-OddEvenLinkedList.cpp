// Last updated: 19/12/2025, 23:27:44
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
13    ListNode* oddEvenList(ListNode* head) {
14        if(head==NULL || head->next==NULL)
15        return head;
16
17        ListNode* odd=head;
18        ListNode* even=head->next;
19        ListNode* evenhead=even;
20        while(even!=NULL && even->next!=NULL){
21          odd->next=odd->next->next;
22          odd=odd->next;
23
24          even->next=even->next->next;
25          even=even->next;
26        }
27        odd->next=evenhead;
28        return head;
29    }
30};