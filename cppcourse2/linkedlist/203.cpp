//203. Remove Linked List Elements

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val)head=head->next;//skips through list if ==val
        ListNode* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==val)temp->next=temp->next->next;
            else temp=temp->next;
        }
        return head;
    }
};
