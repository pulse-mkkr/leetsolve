//61. Rotate List

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }
        k=k%cnt;
        if(k==0)return head;
        ListNode* tail=temp;
        ListNode* rt=head;
        for(int i=1;i<cnt-k;i++)rt=rt->next;
        tail->next=head;
        head=rt->next;
        rt->next=NULL;
        return head;
    }
};
