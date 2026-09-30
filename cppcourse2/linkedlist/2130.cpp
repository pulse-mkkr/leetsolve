//2130. Maximum Twin Sum of a Linked List

class Solution {
    ListNode* rev(ListNode* head){
        if(head==NULL||head->next==NULL)return head;
        ListNode* ans=rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;
    }
public:
    int pairSum(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=rev(slow->next);
        int mx=-1;
        fast=head;
        while(a){
            int num=fast->val+a->val;
            mx=max(mx,num);
            fast=fast->next;
            a=a->next;
        }
        return mx;
    }
};
