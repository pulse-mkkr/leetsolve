//148. Sort List

class Solution {
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* fans=new ListNode(-1);
        ListNode *ans=fans;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                ans->next=a;
                a=a->next;
                ans=ans->next;
            }
            else{
                ans->next=b;
                b=b->next;
                ans=ans->next;
            }
        }
        if(a==NULL)ans->next=b;
        else ans->next=a;
        return fans->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* h1=head;
        ListNode* h2=slow->next;
        slow->next=NULL;
        h1=sortList(h1);
        h2=sortList(h2);
        ListNode* c=merge(h1,h2);
        return c;
    }
};
