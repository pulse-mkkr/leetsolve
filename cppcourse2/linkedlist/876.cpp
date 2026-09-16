//876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        for(int i=0;i<n/2;i++){
            head=head->next;
        }
        return head;
    }
};
