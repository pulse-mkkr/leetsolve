//1721. Swapping Nodes in a Linked List

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)return head;
        ListNode* b=head;
        ListNode* e=head;
        ListNode* temp=head;
        int n=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        for(int i=1;i<k;i++)b=b->next;
        for(int i=1;i<(n-k+1);i++)e=e->next;
        swap(b->val,e->val);
        return head;
    }
};
