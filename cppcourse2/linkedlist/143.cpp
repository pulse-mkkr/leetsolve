//143. Reorder List

class Solution {
    ListNode* reverse(ListNode* head){
        if(head==NULL||head->next==NULL)return head;
        ListNode* ans=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* b=reverse(slow->next);
        ListNode* a=head;
        slow->next=NULL;
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(a!=NULL&&b!=NULL){
            temp->next=a;
            temp=temp->next;
            a=a->next;
            temp->next=b;
            temp=temp->next;
            b=b->next;
        }
        if(a!=NULL)temp->next=a;
        else if(b!=NULL)temp->next=b;
        head=ans;
    }
};
