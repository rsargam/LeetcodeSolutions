// Last updated: 18/09/2025, 08:49:53
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>ans1;
         vector<int>ans2;
         vector<int>result;
        ListNode* temp1=l1;
         ListNode* temp2=l2;
         while(temp1){
            ans1.push_back(temp1->val);
            temp1=temp1->next;
         }
         while(temp2){
            ans2.push_back(temp2->val);
            temp2=temp2->next;
         }
         int i=ans1.size()-1,j=ans2.size()-1,carry=0;
         while(i>=0||j>=0||carry){
            int sum=carry;
            if(i>=0)sum+=ans1[i--];
            if(j>=0)sum+=ans2[j--];
            result.push_back(sum%10);
            carry=sum/10;
         }
         reverse(result.begin(),result.end());
         ListNode* dummy=new ListNode(0);
         ListNode* curr=dummy;
         for(int val:result){
            curr->next=new ListNode(val);
            curr=curr->next;
         }
         return dummy->next;
         }
         

    
};