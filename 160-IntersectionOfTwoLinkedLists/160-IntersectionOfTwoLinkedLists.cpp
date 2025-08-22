// Last updated: 22/08/2025, 23:53:14
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr1=headA , *curr2=headB;
        int counta=0,countb=0;
        while(curr1){
            counta++;
            curr1=curr1->next;
        }
         while(curr2){
            countb++;
            curr2=curr2->next;
        }
        curr1=headA;
        curr2=headB;
        while(counta>countb){
            counta--;
            curr1=curr1->next;
        }
        while(counta<countb){
            countb--;
            curr2=curr2->next;
        }
        while(curr1!=curr2){
        curr1=curr1->next;
        curr2=curr2->next; 
        }
        if(curr1==curr2){
            return curr1;
        }
        return nullptr;
    } 
};