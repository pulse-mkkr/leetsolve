//86. Partition List

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* t1=head;
        ListNode* a=new ListNode(-1);
        ListNode* b=new ListNode(-1);
        ListNode*ta=a;
        ListNode*tb=b;
        while(t1!=NULL){
            if(t1->val<x){
                ta->next=t1;
                ta=ta->next;
            }
            else {
                tb->next=t1;
                tb=tb->next;
            }
            t1=t1->next;
        }
        ta->next=b->next;
        tb->next=NULL;
        return a->next;
    }
};
