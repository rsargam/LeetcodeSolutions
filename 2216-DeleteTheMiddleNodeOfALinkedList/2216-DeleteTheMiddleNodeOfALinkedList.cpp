// Last updated: 22/08/2025, 23:51:51
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=head, *fast=head;
        ListNode *prev=nullptr;
        if (!head || !head->next) {
            return nullptr;
        }
        while(fast!=NULL&&fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if (prev) {
            prev->next = slow->next;
        }
        delete slow;
        return head;
    }
};