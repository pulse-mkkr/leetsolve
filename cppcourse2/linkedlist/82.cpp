//82. Remove Duplicates from Sorted List II

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* ans=new ListNode(-1);
        ListNode* trv=ans;
        int cnt=0;
        ListNode* cn=NULL;
        while(temp){
            cn=temp;
            while(temp!=NULL&&temp->val==cn->val){
                cnt++;
                temp=temp->next;
            }
            if(cnt==1){
                trv->next=cn;
                trv=trv->next;
                trv->next=NULL;//disconnects the extra list
            }
            cnt=0;
        }
        return ans->next;
    }
};
