//19. Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n-1){
            return head->next;
        }
        temp=head;
        for(int i=0;i<(cnt-n);i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
