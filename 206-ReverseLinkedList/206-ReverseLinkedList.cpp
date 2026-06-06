// Last updated: 06/06/2026, 10:29:55
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
13    ListNode* reverseList(ListNode* head) {
14        stack<int>st;
15        ListNode* temp=head;
16        while(temp){
17            st.push(temp->val);
18            temp=temp->next;
19
20        }
21        temp=head;
22        while(temp){
23           
24            temp->val=st.top();
25            st.pop();
26            temp=temp->next;
27            
28        }
29        return head;
30    }
31};