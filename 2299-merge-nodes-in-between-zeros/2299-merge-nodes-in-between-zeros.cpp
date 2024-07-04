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
    ListNode* mergeNodes(ListNode* head) {
        // approach 1
    //   ListNode*p1=head->next;
    //    ListNode*p2=p1;
    //    while(p2!=NULL){
    //    int sum=0;
    //    while(p2!=NULL && p2->val!=0){
    //     sum=sum+p2->val;
    //     p2=p2->next;
    //    } 
    //    p1->val=sum;
    //    p2=p2->next;
    //    p1->next=p2;
    //    p1=p1->next;
    //    }
    //    return head->next;

    // Approach 2(Recursion)
    head=head->next;
    if(head==NULL){
        return head;
    }
    ListNode* temp=head;
    int sum=0;
    while(temp->val!=0 && temp!=NULL){ 
        sum+=temp->val;
        temp=temp->next;
    }
    head->val=sum;
    head->next=mergeNodes(temp);// recursion leap of faith
    return head;
    }
};