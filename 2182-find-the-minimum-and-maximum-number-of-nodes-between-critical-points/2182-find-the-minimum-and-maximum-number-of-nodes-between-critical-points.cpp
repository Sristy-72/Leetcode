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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
      vector<int> ans={-1,-1};
        vector<int> critical;
        struct ListNode* temp=head;
        int prev=head->val,pos=1;
        while(temp!=NULL){
            if((temp->val)<prev){
                if(temp->next!=NULL && (temp->val)<(temp->next->val)){
                    critical.push_back(pos);
                }
            }
            if((temp->val)>prev){
                if(temp->next!=NULL && (temp->val)>(temp->next->val)){
                    critical.push_back(pos);
                }
            }
            pos++;
            prev=temp->val;
            temp=temp->next;
        }
        if(critical.size()>=2){
            int maxm=critical[critical.size()-1]-critical[0];
            int minm=INT_MAX;
            for(int i=critical.size()-1;i>0;i--){
                int diff=critical[i]-critical[i-1];
                minm=min(minm,diff);
            }
            ans[0]=minm;
            ans[1]=maxm;
        }
        return ans;   
    }
};