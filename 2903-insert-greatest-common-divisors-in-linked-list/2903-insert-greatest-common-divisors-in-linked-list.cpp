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
        // if head is the only node present in the LL
     if(head->next==NULL){
        return head;
     }   
      ListNode *curr=head;
      ListNode*nextnode=head->next;
      while(nextnode){
        ListNode*temp=new ListNode (__gcd(curr->val,nextnode->val));
       curr->next=temp;
       temp->next=nextnode;
       curr=nextnode;
       nextnode=nextnode->next;

      }
      return head;
    }
};