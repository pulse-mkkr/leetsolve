//92. Reverse Linked List II

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
        if(left==right)return head;
        ListNode* bl=head;
        ListNode* br=head;
        ListNode* t=head;
        int n=1;
        while(t){
            if(n==left-1)bl=t;
            if(n==right-1)br=t;
            n++;
            t=t->next;
        }
        ListNode* m=bl->next;
        bl->next=NULL;
        t=br->next;
        br->next=NULL;
        m=reverseList(m);
        bl->next=m;
        while(m->next!=NULL){
            m=m->next;
        }
        m->next=t;
        return head;
    }
};
