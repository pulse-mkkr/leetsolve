//147. Insertion Sort List

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head->next;
        while(temp){
            ListNode* p=head;
            while(p&&p!=temp){
                if(p->val>temp->val)swap(p->val,temp->val);
                p=p->next;
            }
            temp=temp->next;
        }
        return head;
    }
};
