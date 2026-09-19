//142. Linked List Cycle II

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        bool flag=false;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                flag= true;
                break;
            }
        }
        if(flag==false)return NULL;   
        ListNode* temp=head;
        while(slow!=temp){
            temp=temp->next;
            slow=slow->next;
        }
        return temp;
    }
};
