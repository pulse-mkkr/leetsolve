//2. Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        bool carry=false;
        while(t1!=NULL&&t2!=NULL){
            int t=t1->val+t2->val;
            if(carry)t+=1;
            if(t>9)carry=true;
            else carry=false;
            temp->next=new ListNode(t%10);
            temp=temp->next;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1){
            int t=t1->val;
            if(carry)t+=1;
            if(t>9)carry=true;
            else carry=false;
            temp->next=new ListNode(t%10);
            temp=temp->next;
            t1=t1->next;
        }
        while(t2){
            int t=t2->val;
            if(carry)t+=1;
            if(t>9)carry=true;
            else carry=false;
            temp->next=new ListNode(t%10);
            temp=temp->next;
            t2=t2->next;
        }
        if(carry)temp->next=new ListNode(1);
        return ans->next;
    }
};
