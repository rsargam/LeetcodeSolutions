// Last updated: 17/09/2025, 01:05:48
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
int findlength(ListNode* head){
    int l=0;
    while(head!=NULL){
        head=head->next;
        l++;
    }
    return l;
}
    ListNode* swapNodes(ListNode* head, int k) {
        int L=findlength(head);
        int k1=k;
        ListNode* node1=head;
        while(k1>1){
            node1=node1->next;
            k1--;
        }
        int k2=L-k+1;
        ListNode* node2=head;
        while(k2>1){
            node2=node2->next;
            k2--;
        }
        swap(node1->val,node2->val);
        return head;
    }
};