//25. Reverse Nodes in k-Group

class Solution {
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* fans=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return fans;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int n=1;
        while(temp){
            if(n==left-1)a=temp;
            if(n==left)b=temp;
            if(n==right)c=temp;
            if(n==right+1)d=temp;
            n++;
            temp=temp->next;
        }
        if(a)a->next=NULL;
        c->next=NULL;
        c=reverseList(b);
        if(a)a->next=c;
        else head=c;
        b->next=d;
        return head;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next==NULL||k==1)return head;
        int n=0;
        ListNode* temp=head,*prev=NULL;
        while(temp){
            n++;
            temp=temp->next;
        }
        int rc=n/k;
        temp=head;
        while(rc){
            rc--;
            ListNode* ans=reverseBetween(temp,1,k);
            if(prev==NULL)head=ans;
            else prev->next=ans;
            prev=temp;
            if(temp)temp=temp->next;
        }
        return head;
    }
};
