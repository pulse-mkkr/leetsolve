//Reverse Linked List-II

class Solution {
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* fans=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return fans;
    }
public:
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
};
