//234. Palindrome Linked List

class Solution {
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* fans=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return fans;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){//middle element
            slow=slow->next;
            fast =fast->next->next;
        }
        ListNode* ts=reverseList(slow->next);//reversed 2nd half
        ListNode* t1=head;
        ListNode* t2=ts;//connected 2nd half to after reverse
        while(t2){
            if(t1->val!=t2->val)return false;//palcheck
            t1=t1->next;
            t2=t2->next;
        }
        return true;
    }
};
