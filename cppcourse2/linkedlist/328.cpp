//328. Odd Even Linked List

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* o=head;
        ListNode* e=head->next;
        ListNode* eh=e;
        while(o->next!=NULL&&e->next!=NULL){
            o->next=e->next;
            o=o->next;
            e->next=o->next;
            e=e->next;
        }
        o->next=eh;
        return head;
    }
};
