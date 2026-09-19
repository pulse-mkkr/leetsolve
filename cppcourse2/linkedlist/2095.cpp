//2095. Delete the Middle Node of a Linked List

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)return head->next;
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL&&fast->next!=NULL){
            if(fast->next->next==NULL)break;
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
