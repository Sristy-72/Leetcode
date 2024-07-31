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
      ListNode* headNode=new ListNode();
      ListNode* currentNode = headNode;
      int carryOver=0;
      while( l1!= nullptr || l2!=nullptr || carryOver!=0 ){
        int val1=0, val2=0;
        if(l1!=NULL) val1=l1->val;
        if(l2!=NULL) val2=l2->val;
        int sum= val1+ val2+carryOver;
        carryOver=sum/10;
        currentNode->next= new ListNode(sum%10);
        currentNode= currentNode->next;
        if(l1!=NULL) l1=l1->next;
        if(l2!=NULL) l2=l2->next;
    }
    return headNode->next;
    }
};