// Last updated: 20/09/2025, 20:38:04
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=insertGreatestCommonDivisors(head->next);
        ListNode* gcd=new ListNode(__gcd(head->val,head->next->val));
        gcd->next=temp;
        head->next=gcd;
        return head;
    }
};