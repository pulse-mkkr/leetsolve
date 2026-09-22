//21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* fans=new ListNode(-1);
        ListNode *ans=fans;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                ans->next=a;
                a=a->next;
                ans=ans->next;
            }
            else{
                ans->next=b;
                b=b->next;
                ans=ans->next;
            }
        }
        if(a==NULL)ans->next=b;
        else ans->next=a;
        return fans->next;
    }
};
